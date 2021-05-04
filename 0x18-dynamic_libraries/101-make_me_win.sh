#!/bin/bash
wget -P /tmp https://github.com/JoelRamirez2016/holbertonschool-low_level_programming/raw/main/0x18-dynamic_libraries/liball.so
export LD_PRELOAD=/tmp/liball.so
