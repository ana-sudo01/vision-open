#include <Arduino.h>
#include <CameraCapture.hpp>

CameraCapture camera;

void setup() {
    Serial.begin(115200);
    Serial2.begin(115200, SERIAL_8N1, 16, 17);

    if(!camera.init()) {
        Serial.println("ERROR, fallo al inicializar la camara en la ESP32");
        return;
    }
    Serial.println("OK Sistema de vision listo en la ESP32");
}

void loop() {
    camera_fb_t* fb = camera.captureFrame();
    if (!fb) return;

    uint16_t* pixels = (unit16_t*)fb->buf;
    int width = 160;
    int height = 120;

    long sumX = 0, sumY = 0;
    int count = 0;

    for (int y = 0; y < height; y += 2) {
        for (int x = 0; x < width; x += 2) {
            uint16_t pixel = pixels[y * width + x]

            uint8_t r = (pixel & OxF800) >> 8;
            uint8_t g = (pixel & 0x07E0) >> 3;
            uint8_t b = (pixel & 0x001F) << 3;

            if (r > 100 && g < 80 && b < 80) {
                sumX += x;
                sumY += y;
                count++;
            }
        }
    }
    if (count > 15) {
        int centerX = sumX / count;
        int centerY = sumY / count;

        Serial2.printf("X:%d, Y:%d\n", centerX, centerY);
    }else {
        Serial2.println("X:-1, Y:-1");
    }   

    camera.releaseFrame(fb);
    delay(20);
}
