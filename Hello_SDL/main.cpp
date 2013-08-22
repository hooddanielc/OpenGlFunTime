#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <OpenGL/glu.h>

#include "GL_Window.h"
#include "GL_Camera.h"
#include "TestSquare.h"
#include "TestSphere.h"
#include "ObjLoader.h"

using namespace std;
using namespace placeholders;

bool quit = false;

void OnKey(GL_Camera &camera, GL_Window &window, const GL_Window::TKeys &keys) {
    for (auto key: keys) {
        switch (key) {
            case SDLK_w: camera.MoveForward(0.1); break;
            case SDLK_s: camera.MoveBackward(0.1); break;
            case SDLK_a: camera.MoveLeft(0.1); break;
            case SDLK_d: camera.MoveRight(0.1); break;

            case SDLK_LEFT: camera.RotateLeft(1.0); break;
            case SDLK_RIGHT: camera.RotateRight(1.0); break;
            case SDLK_DOWN: camera.RotateUp(1.0); break;
            case SDLK_UP: camera.RotateDown(1.0); break;
                
            case SDLK_r: window.LockMouse(); break;
                
            case SDLK_SPACE: window.UnlockMouse(); break;

            case SDLK_ESCAPE: quit = true; break;
        }
    }
}

void OnMouseMove(GL_Camera &camera, int x, int y) {
    camera.RotateDown(float(y) / 5);
    camera.RotateRight(float(x) / 5);
}

unsigned int loadTexture(const char* filename) {
    
    SDL_Surface* img = SDL_LoadBMP(filename);
    unsigned int id;
    glGenTextures(1, &id);
    glBindTexture(GL_TEXTURE_2D, id);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->w, img->h, 0, GL_RGB, GL_UNSIGNED_SHORT_5_6_5, img->pixels);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    SDL_FreeSurface(img);
    return id;
}

int main(int argc, char *argv[]) {
    // Test obj loader
    std::vector<tinyobj::shape_t> shapes;
    std::string err = tinyobj::LoadObj(shapes, "/Users/namfoodel/Documents/xcode-workspace/Hello_SDL/Hello_SDL/facecube.obj", "/Users/namfoodel/Documents/xcode-workspace/Hello_SDL/Hello_SDL/");
    
    // Installation corrupt
    if (!err.empty()) {
        std::cerr << err << std::endl;
        return false;
    }
    for (size_t i = 0; i < shapes.size(); i++) {
        for(size_t x = 0; x < shapes[i].mesh.faces.size(); x++) {
            std::cout << "\n\n";
            for(size_t k = 0; k < shapes[i].mesh.faces[x].v_indices.size(); k++) {
                std::cout << " " << shapes[i].mesh.faces[x].v_indices[k] << " ";
            }
        }
        for(size_t x = 0; x < shapes[i].mesh.texcoords.size(); x++) {
            printf("textcoord = %f\n", shapes[i].mesh.texcoords[x]);
        }
        printf("shape[%ld].name = %s\n", i, shapes[i].name.c_str());
        printf("shape[%ld].indices: %ld\n", i, shapes[i].mesh.indices.size());
        for (size_t f = 0; f < shapes[i].mesh.indices.size(); f++) {
            printf("  idx[%ld] = %d\n", f, shapes[i].mesh.indices[f]);
        }
        
        printf("shape[%ld].vertices: %ld\n", i, shapes[i].mesh.positions.size());
        for (size_t v = 0; v < shapes[i].mesh.positions.size() / 3; v++) {
            printf("  v[%ld] = (%f, %f, %f)\n", v,
                   shapes[i].mesh.positions[3*v+0],
                   shapes[i].mesh.positions[3*v+1],
                   shapes[i].mesh.positions[3*v+2]);
        }
        
        printf("shape[%ld].material.name = %s\n", i, shapes[i].material.name.c_str());
        printf("  material.Ka = (%f, %f ,%f)\n", shapes[i].material.ambient[0], shapes[i].material.ambient[1], shapes[i].material.ambient[2]);
        printf("  material.Kd = (%f, %f ,%f)\n", shapes[i].material.diffuse[0], shapes[i].material.diffuse[1], shapes[i].material.diffuse[2]);
        printf("  material.Ks = (%f, %f ,%f)\n", shapes[i].material.specular[0], shapes[i].material.specular[1], shapes[i].material.specular[2]);
        printf("  material.Tr = (%f, %f ,%f)\n", shapes[i].material.transmittance[0], shapes[i].material.transmittance[1], shapes[i].material.transmittance[2]);
        printf("  material.Ke = (%f, %f ,%f)\n", shapes[i].material.emission[0], shapes[i].material.emission[1], shapes[i].material.emission[2]);
        printf("  material.Ns = %f\n", shapes[i].material.shininess);
        printf("  material.map_Ka = %s\n", shapes[i].material.ambient_texname.c_str());
        printf("  material.map_Kd = %s\n", shapes[i].material.diffuse_texname.c_str());
        printf("  material.map_Ks = %s\n", shapes[i].material.specular_texname.c_str());
        printf("  material.map_Ns = %s\n", shapes[i].material.normal_texname.c_str());
        std::map<std::string, std::string>::iterator it(shapes[i].material.unknown_parameter.begin());
        std::map<std::string, std::string>::iterator itEnd(shapes[i].material.unknown_parameter.end());
        for (; it != itEnd; it++) {
            printf("  material.%s = %s\n", it->first.c_str(), it->second.c_str());
        }
        printf("\n");
    }
    
    std::cout << "# of shapes : " << shapes.size() << std::endl;
    
    GL_Window window;
    GL_Camera camera;
    TestSquare mysquare;
    TestSphere mysphere;
    
    

    GL_Window::TKeyHandler key_handler = bind(OnKey, ref(camera), ref(window), _1);
    window.RegisterKeyHandler(key_handler);

    GL_Window::TMouseHandler mouse_handler = bind(OnMouseMove, ref(camera), _1, _2);
    window.RegisterMouseHandler(mouse_handler);

    window.LockMouse();
    
    glMatrixMode (GL_PROJECTION);
    glFrustum (-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
    glMatrixMode (GL_MODELVIEW);

    
    // LIGHTING
    GLfloat black[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat yellow[] = { 1.0, 1.0, 0.0, 1.0 };
    GLfloat cyan[] = { 0.0, 1.0, 1.0, 1.0 };
    GLfloat white[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat direction[] = { 3.0, 3.0, 5.0, 0.0 };
    
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, cyan);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 30);
    
    glLightfv(GL_LIGHT0, GL_AMBIENT, black);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, yellow);
    glLightfv(GL_LIGHT0, GL_SPECULAR, white);
    glLightfv(GL_LIGHT0, GL_POSITION, direction);
    
    glEnable(GL_LIGHTING);                // so the renderer considers light
    glEnable(GL_LIGHT0);                  // turn LIGHT0 on
    glEnable(GL_DEPTH_TEST);              // so the renderer considers depth
    glShadeModel(GL_SMOOTH);
    
    // TEXTURE
    glEnable(GL_TEXTURE_2D);
    unsigned int tex = loadTexture("/Users/namfoodel/Documents/xcode-workspace/Hello_SDL/Hello_SDL/texture.bmp");
    
    while(!quit) {

        window.StartGl();
        if(window.getEventType() == SDL_QUIT) {
            quit = true;
        }
        glClearColor ( 0.0, 0.0, 0.0, 1.0 );
        glClear ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

        glPushMatrix();
        camera.update();
        //glShadeModel(GL_SMOOTH);
        glLightfv(GL_LIGHT0, GL_POSITION, direction);
        
        // Build a box
        //mysquare.display();
        
        mysphere.display();

        //Build a floor
        glBegin(GL_QUADS);
        glNormal3f(0, 1, 0);
        glVertex3f(-4, -1, -4);
        glVertex3f(4, -1, -4);
        glVertex3f(4, -1, 4);
        glVertex3f(-4, -1, 4);
        glEnd();
        
        // Build texture
        glBindTexture(GL_TEXTURE_2D, tex);
        glBegin(GL_QUADS);

        glTexCoord2f(0.0,2.0);
        glVertex3f(-2.0,2.0,0.0);
        glTexCoord2f(0.0,0.0);
        glVertex3f(-2.0,-2.0,0.0);
        glTexCoord2f(2.0,0.0);
        glVertex3f(2.0,-2.0,0.0);
        glTexCoord2f(2.0,2.0);
        glVertex3f(2.0,2.0,0.0);
        glEnd();
        
        glPopMatrix();
        
        window.EndGl();
    }
    
    // Quit da windur
    window.Quit();
    
    return 0;
}

