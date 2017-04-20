cmake_minimum_required(VERSION 3.7)
project(FactoryVariadic)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp OpAdd.cpp OpAdd.h OpFactory.cpp OpFactory.h OpMultiply.cpp OpMultiply.h)
add_executable(FactoryVariadic ${SOURCE_FILES})