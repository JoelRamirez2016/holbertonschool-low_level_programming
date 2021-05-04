#!/bin/bash
wget -P .. https://github.com/JoelRamirez2016/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/101-funmod.so
export LD_PRELOAD=../101-funmod.so
