# Lego Island 2: The Brickster's Revenge

This is a decompilation of Lego Island 2 for the GBA using [bagd](https://github.com/minirop/bagd).

⚠️ For now, the setup process is mostly manual and without documentation ⚠️

## Scripts

### tools/maketools

This script will download and build (some of) the tools necessary to build the rom. \
You need `git` and `rust` to build them.

⚠️ [agbcc](https://github.com/pret/agbcc) and `arm-none-eabi-*` still need to be installed manually

### tools/sourcetools

If you use bash, this script will source the folders where the built tools will reside.

## Extract assets

At the root of the folder, place the ROM named `baserom.gba` and execute:

```sh
$ isle2-tool extract assets.yaml
```

## Setup

To generate the files necessary to build the ROM:

```sh
$ bagd update
```

## Build

Just type:

```sh
$ bagd build
```
