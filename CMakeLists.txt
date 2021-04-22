cmake_minimum_required(VERSION 3.19)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp src/PrimeNumberCalculator.cpp src/PrimeNumberCalculator.h src/GCDCalculator.cpp src/GCDCalculator.h src/LCMCalculator.cpp src/LCMCalculator.h)