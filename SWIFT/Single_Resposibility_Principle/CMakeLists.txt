cmake_minimum_required( VERSION 3.8 )
project( Single_Resposibility_Principle )

add_custom_target( Single_Resposibility_Principle ALL
        COMMAND /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/swift build
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        SOURCES Sources/main.swift )