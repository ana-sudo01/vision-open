#Version de CMake y datos del proyecto
cmake_minimum_required(VERSION 3.16)
project(LarcVisionModule CXX)

#Incluir archivos cabecera (.hpp)
include_directories(include)

# Definir el programa principal
add_executable(
    src/main.cpp
    src/CameraCapture.cpp
)