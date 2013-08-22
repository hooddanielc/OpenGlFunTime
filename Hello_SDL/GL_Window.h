#pragma once

#include <functional>
#include <set>
#include <vector>

#include <SDL2/SDL.h>

class GL_Window {
    public:

    using TKeys = std::set<int>;
    using TKeyHandler = std::function<void (const TKeys &)>;
    using TKeyHandlers = std::vector<TKeyHandler>;

    using TMouseHandler = std::function<void (int, int)>;
    using TMouseHandlers = std::vector<TMouseHandler>;

    void RegisterKeyHandler(const TKeyHandler &key_handler);
    void RegisterMouseHandler(const TMouseHandler &mouse_handler);

    GL_Window();
    SDL_Window *window; /* Our window handle */
    SDL_GLContext gl_context; /* Our opengl context handle */
    TMouseHandlers MouseHandlers;
    TKeyHandlers KeyHandlers;
    TKeys Keys;

    void StartGl();
    void EndGl();
    void Quit();
    void LockMouse();
    void UnlockMouse();

    Uint32 getEventType();

    private:
    SDL_Event e;
    Uint32 eventType;

    void init();
    void initWindow();
    void initGlWindow();
    void reshape(int w, int h);
    void CheckSDLError(int line);
    void sdldie(const char *msg);
};