#!/bin/bash
gcc -fno-pie -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c | ar -rc liball.a *.o
