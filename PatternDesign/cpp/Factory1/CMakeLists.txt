cmake_minimum_required(VERSION 3.6)
project(Factory1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ArithmeticOP.h Addition.cpp Addition.h Multiplication.cpp Multiplication.h ArithmFactory.cpp ArithmFactory.h)
add_executable(Factory1 ${SOURCE_FILES} ArithmeticOP.h Addition.cpp Addition.h Multiplication.cpp Multiplication.h ArithmFactory.cpp ArithmFactory.h)