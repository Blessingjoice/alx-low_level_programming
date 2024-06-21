#!/bin/bash
gcc *.o -fPIC -shared -o hacked.so
LD_PRELOAD=$PWD/hacked.so
