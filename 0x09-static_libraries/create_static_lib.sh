#!/bin/bash
gcc -c *.c
sleep 2
ar -rc liball.a *.o
