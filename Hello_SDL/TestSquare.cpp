#include "TestSquare.h"

#include <cstddef>
#include <SDL2/SDL_opengl.h>
#include <OpenGL/glu.h>

#include <iostream>
using namespace std;

void TestSquare::display() {
    struct pnt_t {
        GLfloat X, Y, Z;
    };
    
    constexpr GLfloat s = 0.5;
    
    pnt_t pts[8] = {
        { -s, +s, +s },
        { +s, +s, +s },
        { +s, -s, +s },
        { -s, -s, +s },
        { -s, +s, -s },
        { +s, +s, -s },
        { +s, -s, -s },
        { -s, -s, -s }
    };

    struct face_t {
        GLfloat R, G, B;
        size_t Idxs[4];
    };
    
    face_t faces[6] = {
        0.0, 0.0, 1.0, { 0, 1, 2, 3 },
        -1.0, 0.0, 0.0, { 0, 4, 7, 3 },
        1.0, 0.0, 0.0, { 1, 5, 6, 2 },
        0.0, 1.0, 0.0, { 0, 1, 5, 4 },
        0.0, -1.0, 0.0, { 3, 2, 6, 7 },
        0.0, 0.0, -1.0, { 4, 5, 6, 7 }
    };
    glBegin(GL_QUADS);
    for (size_t i = 0; i < 6; ++i) {
        const auto &face = faces[i];
        
        glNormal3f(face.R, face.G, face.B);
        for (size_t j = 0; j < 4; ++j) {
            const auto &pnt = pts[face.Idxs[j]];
            cout << pnt.X << endl;
            glVertex3f(pnt.X, pnt.Y, pnt.Z);
        }
    }
    glEnd();
}