#!/bin/bash

clang++ -O3 -flto -march=native *.cpp -o a.out

./a.out
