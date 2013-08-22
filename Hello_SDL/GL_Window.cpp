#include "GL_Window.h"

#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <SDL2/SDL_keyboard.h>
#include <OpenGL/glu.h>

GL_Window::GL_Window() {    
    init();
    initWindow();
    initGlWindow();
}

void GL_Window::RegisterKeyHandler(const TKeyHandler &key_handler) {
    KeyHandlers.push_back(key_handler);
}

void GL_Window::RegisterMouseHandler(const TMouseHandler &mouse_handler) {
    MouseHandlers.push_back(mouse_handler);
}

void GL_Window::CheckSDLError(int line = -1) {
#ifndef NDEBUG
    const char *error = SDL_GetError();
    if (*error != '\0') {
        printf("SDL Error: %s\n", error);
        if (line != -1)
            printf(" + line: %i\n", line);
        SDL_ClearError();
    }
#endif
}

void GL_Window::sdldie(const char *msg) {
    printf("%s: %s\n", msg, SDL_GetError());
    SDL_Quit();
    exit(1);
}

void GL_Window::init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) /* Initialize SDL's Video subsystem */
        sdldie("Unable to initialize SDL"); /* Or die on error */
    /* Request opengl 3.2 context.
     * SDL doesn't have the ability to choose which profile at this time of writing,
     * but it should default to the core profile */
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    
    /* Turn on double buffering with a 24bit Z buffer.
     * You may need to change this to 16 or 32 for your system */
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
}

void GL_Window::initWindow() {
    /* Create our window centered at 512x512 resolution */
    window = SDL_CreateWindow(
      "My Program Name",
      SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
      100,
      100,
      SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    if (!window) /* Die if creation failed */
        sdldie("Unable to create window");
    
    CheckSDLError(__LINE__);
}

void GL_Window::initGlWindow() {
    /* Create our opengl context and attach it to our window */
    gl_context = SDL_GL_CreateContext(window);
    CheckSDLError(__LINE__);

    /* This makes our buffer swap syncronized with the monitor's vertical refresh */
    SDL_GL_SetSwapInterval(1);
    /* This lets gl figure out depth for you */
    glEnable(GL_DEPTH_TEST);
};

void GL_Window::reshape (int w, int h) {
    glViewport (0, 0, (GLsizei)w, (GLsizei)h); //set the viewport to the current window specifications
    glMatrixMode (GL_PROJECTION); //set the matrix to projection
    
    glLoadIdentity ();
    gluPerspective (60, (GLfloat)w / (GLfloat)h, 1.0, 1000.0); //set the perspective (angle of sight, width, height, , depth)
    glMatrixMode (GL_MODELVIEW); //set the matrix back to model
}

void GL_Window::StartGl() {
    eventType = e.type;
    while(SDL_PollEvent(&e)) {
        if (e.type == SDL_KEYDOWN) {
            Keys.insert(static_cast<int>(e.key.keysym.sym));
        }
        if (e.type == SDL_KEYUP) {
            Keys.erase(static_cast<int>(e.key.keysym.sym));
        }
        if (e.type == SDL_MOUSEMOTION) {
            for (const auto &mouse_handler: MouseHandlers) {
                mouse_handler(e.motion.xrel, -e.motion.yrel);
            }
        }
        if (e.type == SDL_WINDOWEVENT) {
            if(e.window.event == SDL_WINDOWEVENT_RESIZED) {
                std::cout <<"wtf";
                int w;
                int h;
                SDL_GetWindowSize(window, &w, &h);
                reshape(w, h);
            }
        }
    }
    for (const auto &key_handler: KeyHandlers) {
        key_handler(Keys);
    }
}

Uint32 GL_Window::getEventType() {
    return eventType;
}

void GL_Window::EndGl() {
    SDL_GL_SwapWindow(window);
}

void GL_Window::Quit() {
    /* Delete our opengl context, destroy our window, and shutdown SDL */
    SDL_GL_DeleteContext(gl_context);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void GL_Window::LockMouse() {
    SDL_SetRelativeMouseMode(SDL_TRUE);
}

void GL_Window::UnlockMouse() {
    SDL_SetRelativeMouseMode(SDL_FALSE);
}
