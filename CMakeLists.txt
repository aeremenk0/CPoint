cmake_minimum_required(VERSION 3.23)
project(CPoint)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        Point.h
        Point.cpp
        Dist.h
        Dist.cpp
        CPoint.h
        CPoint.cpp
        CDist.h
        CDist.cpp
        main.cpp)