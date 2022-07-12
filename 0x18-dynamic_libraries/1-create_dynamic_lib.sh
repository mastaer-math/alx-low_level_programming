#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
gcc -shared -o liball.o *.o
