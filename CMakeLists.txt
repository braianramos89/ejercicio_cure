cmake_minimum_required(VERSION 3.23)
project(CentroCultural_mio)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CentroCultural_mio
        cliente.cpp
        cliente.h
        disco.cpp
        disco.h
        libro.cpp
        libro.h
        main.cpp
        material.cpp
        material.h
        peticion.cpp
        peticion.h)
