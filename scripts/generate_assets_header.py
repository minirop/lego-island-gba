from os import walk
from os.path import dirname, abspath

includes = []

ROOTDIR = dirname(abspath(__file__))

gfx = f"{ROOTDIR}/../gfx"
for root, subdirs, files in walk(gfx):
    for file in files:
        if file.endswith(".h"):
            includes.append(f"{root}/{file}")

with open(f"{ROOTDIR}/../include/gfx.h", "w+") as f:
    for inc in includes:
        f.write(f"#include \"{inc.removeprefix(ROOTDIR + "/")}\"\n")
