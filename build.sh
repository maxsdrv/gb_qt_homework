#!/bin/sh

export CC=gcc
export CXX=g++

cmake -DCMAKE_BUILD_TYPE=Debug -B build src
VERBOSE=1 cmake --build build --parallel  # --clean-first
