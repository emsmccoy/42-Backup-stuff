#!/bin/bash

//casos correctos
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
./rush-01 "1 2 3 4 4 3 2 1 1 2 3 4 4 3 2 1" | cat -e
./rush-01 "2 4 1 3 1 2 4 3 4 2 3 1 3 1 2 4" | cat -e

//casos erroneos
./rush-01 "1 2 3 4 1 2 3 4 4 3 2 1 4 3 2 1" | cat -e
./rush-01 "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4" | cat -e
