cmake_minimum_required(VERSION 3.6)
project(gMockMeetup)

set(CMAKE_CXX_STANDARD 11)
set( gTestPath ../../googletest )
set( gTestPath2 /Users/sonneundasche/Programming/googletest )

include_directories(
        .
        ${gTestPath}/googlemock/include
        ${gTestPath}/googletest/include
)

set(SOURCE_FILES main.cpp MockTurtle.h Number.cpp Drawer.cpp MockDrawer.h)

add_executable( gMockMeetup ${SOURCE_FILES} MockTurtle.h)
target_link_libraries( gMockMeetup
        ${gTestPath2}/libgmock.a
        ${gTestPath2}/libgmock_main.a
        ${gTestPath2}/libgtest_main.a
        ${gTestPath2}/libgtest.a
        )

add_executable( gMockTest gMockTest.cpp Number.cpp MockTurtle.h MockDrawer.h Drawer.cpp)
target_link_libraries( gMockTest
        ${gTestPath2}/libgmock.a
        ${gTestPath2}/libgmock_main.a
        ${gTestPath2}/libgtest_main.a
        ${gTestPath2}/libgtest.a
        )