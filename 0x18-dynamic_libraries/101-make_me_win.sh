#!/bin/bash
wget -O myrand.so https://github.com/ali-hy/alx-low_level_programming/raw/main/0x18-dynamic_libraries/myrand.so
export LD_PRELOAD='./myrand.so'
