#include "CameraCapture.hpp"

#include <iostream>

CameraCapture::CameraCapture() {
    std::cout <<"[CameraCapture] Objeto creado en memoria.\n";
}

bool CameraCapture::init() {
    std::cout <<"CameraCapture, inicializando el hardware de la cámara...\n";
    return true;
}

CameraCapture::FrameBuffer* CameraCapture::captureFrame(){
    FrameBuffer* fb = new FrameBuffer();
    fb->buf = "datos_de_imagen_simulada";
    fb->len = 24;

    return fb;
}

void CameraCapture::releaseFrame(FrameBuffer* fb){
    if (fb != nullptr) {
        delete fb;
    }
}