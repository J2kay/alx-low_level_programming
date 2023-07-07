#!/bin/bash
gcc -c *.c | ar rcs liball.a find . -type f -name "*.o"  
