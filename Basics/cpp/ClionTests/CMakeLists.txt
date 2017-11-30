cmake_minimum_required(VERSION 3.6)
project(ClionTests)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        Animal.cpp
        Dog.cpp
        )

add_executable(ClionTests ${SOURCE_FILES})
