cmake_minimum_required(VERSION 3.10)
project(LarcVisionModule)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

#OpenCV solo componentes esenciales de captura y visualización
find_package(OpenCV REQUIRED COMPONENTS core videoio highgui imgproc)

#carpeta de cabeceras locales y OpenCV
include_directories(
    include(
        ${OpenCV_INCLUDE_DIRS}
    )
)

add_executable(
    capture_test
    src/main.cpp
    src/CameraCapture.cpp
)

target_link_libraries(capture_test ${OpenCV_LIBS})