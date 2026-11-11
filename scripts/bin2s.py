import sys, os

if len(sys.argv) != 2:
    sys.exit(1)

filepath = sys.argv[1]
filename = os.path.basename(filepath)

if os.path.exists(f"{filepath}.s") and os.path.getmtime(f"{filepath}.s") >= os.path.getmtime(f"{filepath}"):
    sys.exit(0)

with open(filepath, 'rb') as f:
    content = f.read()

with open(f"{filepath}.s", "w+") as f:
    var_name = filename.replace('-', '_').replace('.', '_')
    if var_name[:1].isdigit():
        var_name = '_' + var_name
    f.write(f"""    .section .rodata, "a"
    .balign 4
    .global {var_name}
{var_name}:""")
    for (i, b) in enumerate(content):
        if (i % 20) == 0:
            f.write("\n   .byte ")
        else:
            f.write(", ")
        f.write(f"0x{b:02X}")

with open(f"{filepath}.h", "w+") as f:
    f.write(f"""#ifndef {var_name}_h
#define {var_name}_h

#include <stdint.h>

extern const uint8_t {var_name}[];

#endif // {var_name}_h
""")
