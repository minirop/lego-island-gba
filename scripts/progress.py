from os import listdir
from os.path import isfile, join
import subprocess

naked_functions = []
all_functions = []

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

print (len(naked_functions), "naked functions")
print (len(all_functions), "functions")
print (str(round(100.0 - len(naked_functions) * 100 / len(all_functions), 2)) + "%")
