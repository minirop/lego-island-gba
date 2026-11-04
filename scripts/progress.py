from os import listdir
from os.path import isfile, join
import subprocess

naked_functions = []
all_functions = []
functions_sizes = {}

src = "../src"
for f in listdir(src):
    fpath = join(src, f)
    if isfile(fpath):
        if f.endswith(".c"):
            file = open(fpath, "r")
            for line in file:
                l = line.strip()
                if "__attribute__((naked))" in l:
                    name = [x for x in l.split(" ") if '(' in x][1]
                    naked_functions.append(name[:name.index('(')])

            file.close()
        elif f.endswith(".o"):
            result = subprocess.run(['arm-none-eabi-readelf', '-s', fpath], stdout=subprocess.PIPE)
            result = result.stdout.decode('utf-8')
            for l in result.split('\n'):
                if "FUNC    GLOBAL" in l:
                    parts = [x for x in l.split(" ") if len(x) > 0]
                    all_functions.append(parts[-1])
                    functions_sizes[parts[-1]] = int(parts[2])

all_count = len(all_functions)
all_naked = len(naked_functions)
print (all_count - all_naked, "/", all_count, "functions done")
print ("-", str(round(100.0 - all_naked * 100 / all_count, 2)) + "%")

size_sum = sum(functions_sizes.values())
size_naked = sum([s for n, s in functions_sizes.items() if n in naked_functions])
print ("bytes:", str(round(100.0 - size_naked * 100 / size_sum, 2)) + "%")

asm_bytes = 0
src = "../asm"
for f in listdir(src):
    fpath = join(src, f)
    if isfile(fpath):
        if f.startswith("rom_") and f.endswith(".o"):
            result = subprocess.run(['arm-none-eabi-readelf', '-S', fpath], stdout=subprocess.PIPE)
            result = result.stdout.decode('utf-8')
            for l in result.split('\n'):
                if ".text" in l:
                    parts = [x for x in l.split(" ") if len(x) > 0]
                    asm_bytes += int(parts[6], 16)
print(f"ASM bytes: {asm_bytes} / func bytes: {size_sum}")
print(f"total: {asm_bytes + size_sum}")
