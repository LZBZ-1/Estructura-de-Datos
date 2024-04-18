cmake_minimum_required(VERSION 3.27)
project(Estructuras_de_Datos)

set(CMAKE_CXX_STANDARD 17)

add_executable(Estructuras_de_Datos main.cpp
        Node/SimpleListNode/SimpleListNode.cpp
        Node/SimpleListNode/SimpleListNode.h)
