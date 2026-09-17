#pragma once

#include "esp_camera.h"

class CameraCapture{
public:
    CameraCapture();
    bool init();
    camera_fb_t* captureFrame();
    void releaseFrame(camera_fb_t*);

private:
    camera_config_t config;
};