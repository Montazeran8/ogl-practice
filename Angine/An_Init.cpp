#include "Angine/An_Inits.hpp"

namespace An{

  const Uint8* KeyboardState = SDL_GetKeyboardState(NULL);
  SDL_Keymod KeyMod;

  // initializing the Angine
  void Init()
  {

    LoadSDL();

    glAttribs(4,1,24,1);

    CreateWindow("Angine",
        0,0,
        540,360,
        SDL_WINDOW_OPENGL);

    CreateContext();

    SDL_GL_SetSwapInterval(0);

    LoadGlad();

    glInfo();

  }
}
