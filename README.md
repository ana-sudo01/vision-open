# LARC Open - Módulo de Visión artificial

Módulo base de captura y lectura de video en tiempo real desarrollado en C++ y OpenCV para la competencia LARC Open.

## Requisitos previos
- Compilador de C++ (GCC/Cland en Linux/macOS, MinGW/MSVC en Windows) con soporte para C++14 o superior
- CMake(>= 3.10)
- OpenCV (librerias core, videoio,highgui, imgproc instaladas)

## Estructura del proyecto
- `include/`: Cabeceras (`.hpp`)
-  `src/`: Implementación (`.cpp`) y punto de entrada `main.cpp`
- `data/`: Directorio local para imágenes y videos de prueba
- `build/`: DIrectorio aislado de compilación (ignorado en Git)

## Compilación y ejecución

1. Crear y entrar a la carpeta de compilación:
