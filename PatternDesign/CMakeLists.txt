cmake_minimum_required(VERSION 3.6)
project(PatternDesign)

set(CMAKE_CXX_STANDARD 14)

# --- Pattern excecutable files
set(SOURCE_FILES Singleton.cpp shared/SingletonBase.cpp shared/SingletonBase.h)


add_executable(PatternDesign ${SOURCE_FILES})