#pragma once
#include <iostream>
#include "GL_Window.h"

class GL_Camera {
    public:

    void MoveForward(float amount);
    void MoveBackward(float amount);
    void MoveLeft(float amount);
    void MoveRight(float amount);

    void RotateLeft(float amount);
    void RotateRight(float amount);
    void RotateUp(float amount);
    void RotateDown(float amount);
    
    void update();

    private:
    float xpos = 0, ypos = 1, zpos = 5, xrot = 0, yrot = 0, angle=0.0;
};