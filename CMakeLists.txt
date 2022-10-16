cmake_minimum_required(VERSION 3.23)
project(CPoint)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CPoint
        CDist.h
        CPoint.h
        Dist.cpp
        Dist.h
        #func.cpp
        #func.h
        main.cpp
        Point.cpp
        Point.h CDist.cpp
        CPoint.cpp CDist.h)
