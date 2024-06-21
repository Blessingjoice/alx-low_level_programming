#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
expoer LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
