cmake_minimum_required(VERSION 3.6)
project(PatternDesign)

set(CMAKE_CXX_STANDARD 14)

# --- Pattern excecutable files
set( EXEC_FILES
        PrototypeMain.cpp
#        SingletonMain.cpp
        )

# --- .cpp files of classes
set( SOURCE_FILES )

add_executable(PatternDesign ${EXEC_FILES} ${SOURCE_FILES})