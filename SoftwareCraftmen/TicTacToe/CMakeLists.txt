cmake_minimum_required(VERSION 3.6)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 11)
include_directories(Catch2/include)


#set(SOURCE_FILES main.cpp)
#add_executable(TicTacToe ${SOURCE_FILES})

enable_testing()
set(TEST_SOURCE_FILES Tests.cpp)
add_executable(testExec ${TEST_SOURCE_FILES})
add_test(NAME MyTests COMMAND testExec)
