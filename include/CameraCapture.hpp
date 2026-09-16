#pragma once

#include <iostream>

class CameraCapture{
    public:
    CameraCapture();
    bool init();

    struct FrameBuffer{
        const char* buf;
        int len;
    };

    FrameBuffer* captureFrame();
    void releaseFrame(FrameBuffer* fb);


};

