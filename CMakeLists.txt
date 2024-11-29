cmake_minimum_required(VERSION 3.10)

project(coleccion_de_ejercicios_STL)

set(CMAKE_CXX_STANDARD 11)

add_executable(coleccion_de_ejercicios_STL
        main.cpp
        archivo/archivo.cpp
        triangulo/triangulo.cpp
        circulo/circulo.cpp
        archivo/archivo.h
        circulo/circulo.h
        triangulo/triangulo.h)
