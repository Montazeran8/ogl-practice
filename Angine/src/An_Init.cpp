#include "Angine/An_Inits.hpp"

namespace An
{
    const Uint8* KeyboardState = SDL_GetKeyboardState(NULL);
    SDL_Keymod KeyMod;

    // initializing the Angine
    void Init()
    {

        LoadSDL();

        glAttribs(4, 1, 24, 1);

        CreateWindow("Angine",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            1440, 900,
            SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN_DESKTOP);

        CreateContext();

        SDL_GL_SetSwapInterval(0);

        LoadGlad();

        glInfo();
    }
}
