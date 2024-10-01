#include "Angine/An_Inits.hpp"
#include "Angine/An_Globals.hpp"
#include "Angine/An_CleanUps.hpp"

#include <iostream>

namespace An
{
  // creates the An::Context based on An::Window
  void CreateContext()
  {
    Context = SDL_GL_CreateContext(Window);
    if(Context==nullptr)
    {
      std::cerr << SDL_GetError() << std::endl;
      Exit(1);
    }
  }
}
