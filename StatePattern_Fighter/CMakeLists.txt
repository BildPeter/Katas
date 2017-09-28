cmake_minimum_required( VERSION 3.8 )
project( StatePattern )

set( CMAKE_CXX_STANDARD 11 )

set( SOURCE_FILES_BASIC main_basic.cpp )
add_executable( StatePattern_Basic ${SOURCE_FILES_BASIC} )

set( SOURCE_FILES_FIGHTER main_fighter.cpp )
add_executable( StatePattern_Fighter ${SOURCE_FILES_FIGHTER} )