cmake_minimum_required(VERSION 3.6)
project(PatternDesign)

set(CMAKE_CXX_STANDARD 14)

# --- Pattern excecutable files
set(SOURCE_FILES
        PrototypeMain.cpp
#        SingletonMain.cpp
        shared/StringSingleton.h
        shared/StringSingleton2.h
        shared/StringSingleton3.h
        shared/PrinterPrototype.h)


add_executable(PatternDesign ${SOURCE_FILES})