#!/bin/bash
gcc -c -fPIC -shared -o hacked.so
LD_PRELOAD=$PWD/hacked.so
