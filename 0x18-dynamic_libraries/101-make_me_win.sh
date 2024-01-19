#!/bin/bash
wget --retry-connrefused --waitretry=1 --read-timeout=20 --timeout=15 -t 0 --continue -O myrand.so https://github.com/ali-hy/alx-low_level_programming/raw/main/0x18-dynamic_libraries/lib/myrand.so
export LD_PRELOAD='./myrand.so'
