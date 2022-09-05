#!/bin/bash
gcc *.o -fPIC -shared -o nrandom.so
LD_PRELOAD=$PWD/nrandom.so
