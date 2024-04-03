cmake_minimum_required(VERSION 3.26)
project(WccCLION)

set(CMAKE_CXX_STANDARD 17)

add_executable(WccCLION Clases/Classes.cpp
        Resolucion_control_4/Ejercicio3.cpp
        Resolucion_control_4/Array.h
        Resolucion_control_4/Classe.h
        Resolucion_control_4/Memoryleak.cpp)
