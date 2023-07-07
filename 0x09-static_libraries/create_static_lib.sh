#!/bin/bash
ar rcs liball.a | find . -type f -name "*.c" | gcc -c *.c  
