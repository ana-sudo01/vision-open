#include <iostream> //permite imprimir mensajes en la consola con std::cout

#include "include/CameraCapture.hpp"

int main() {
    std::cout <<"INICIO, arrancando el sistema de visión...\n";

    //crear un objeto de la clase CameraCapture
    CameraCapture camera;

    if(!camera.init()){ // ! es una negación
        std::cerr <<"ERROR, no se pudo inicializar la cámara. Revise las conexiones";
        return -1; //salir indicando fallo
    }

    std::cout <<"OK, cámara inicializada correctamente";
}
