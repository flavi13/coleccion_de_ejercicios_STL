cmake_minimum_required(VERSION 3.10)

project(coleccion_de_ejercicios_STL)

set(CMAKE_CXX_STANDARD 11)

add_executable(coleccion_de_ejercicios_STL
        main.cpp
        triangulo/triangulo.cpp
        circulo/circulo.cpp
        circulo/circulo.h
        triangulo/triangulo.h
        ciencia/fisica/fisica.h
        contenedores/contenedores.cpp)
