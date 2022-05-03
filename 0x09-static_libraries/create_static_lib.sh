#!/bin/bash
gcc -c *.c
ar -rc libmy.a *.o
ar -t libmy.a
ranlib liball.a
