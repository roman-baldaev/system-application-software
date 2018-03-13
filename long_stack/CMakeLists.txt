cmake_minimum_required(VERSION 3.9)
project(long_stack)

set(CMAKE_CXX_STANDARD 11)

add_executable(long_stack main.cpp
        src/stack/Stack.h
        src/exception/Exception.cpp
        src/exception/Exception.h
        src/exception/stackException.cpp
        src/exception/stackException.h
        src/exception/stackOverflowException.cpp
        src/exception/stackOverflowException.h
        src/exception/emptyStackException.cpp
        src/exception/emptyStackException.h
        src/exception/emptyStackException.cpp
        src/exception/emptyStackException.h)