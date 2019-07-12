
#!/bin/bash

DIRECTORY=build

if [ -d "$DIRECTORY" ]; then
    rm -rf ./$DIRECTORY
fi

mkdir build #make dir build

cd ./build #change dir to build

cmake .. # gen makefile

make # compile by makefile

./Cmake_Example # run exe file