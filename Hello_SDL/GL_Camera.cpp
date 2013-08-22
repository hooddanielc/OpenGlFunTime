#include "GL_Camera.h"
#include <SDL2/SDL_opengl.h>

void GL_Camera::update() {
    if(xrot > 90) xrot = 90;
    if(xrot < -90) xrot = -90;

    glRotatef(xrot,1.0,0.0,0.0);  //rotate our camera on teh x-axis (left and right)
    glRotatef(yrot,0.0,1.0,0.0);  //rotate our camera on the y-axis (up and down)
    glTranslated(-xpos,-ypos,-zpos); //translate the screen to the position of our camera
}


void GL_Camera::MoveForward(float amount) {
    float yrotrad = yrot / 180 * 3.141592654f;
    xpos += float(sin(yrotrad)) * amount;
    zpos -= float(cos(yrotrad)) * amount;
}

void GL_Camera::MoveBackward(float amount){
    float yrotrad = yrot / 180 * 3.141592654f;
    xpos -= float(sin(yrotrad)) * amount;
    zpos += float(cos(yrotrad)) * amount;
}

void GL_Camera::MoveLeft(float amount){
    float yrotrad = (yrot - 90) / 180 * 3.141592654f;
    xpos += float(sin(yrotrad)) * amount;
    zpos -= float(cos(yrotrad)) * amount;
}

void GL_Camera::MoveRight(float amount){
    float yrotrad = (yrot - 90) / 180 * 3.141592654f;
    xpos -= float(sin(yrotrad)) * amount;
    zpos += float(cos(yrotrad)) * amount;
}

void GL_Camera::RotateLeft(float amount) {
    yrot -= 1 * amount;
    if (yrot < -360)yrot += 360;
}

void GL_Camera::RotateRight(float amount) {
    yrot += 1 * amount;
    if (yrot > 360) yrot -= 360;
}

void GL_Camera::RotateUp(float amount) {
    xrot += amount;
    if (xrot >360) xrot -= 360;
}

void GL_Camera::RotateDown(float amount) {
    xrot -= amount;
    if (xrot < -360) xrot += 360;
}



