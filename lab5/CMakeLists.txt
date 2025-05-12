cmake_minimum_required(VERSION 3.30)
project(lab5)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab5 main.cpp
        Converter.cpp
        Converter.h
        List.cpp
        List.h)
