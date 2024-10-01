#include "Angine/An_Inits.hpp"
#include "Angine/An_CleanUps.hpp"

#include <iostream>

namespace An
{
  // makes sure SDL is loaded properly
  void LoadSDL()
  {
    if(SDL_Init(SDL_INIT_VIDEO)<0)
    {
      std::cerr << SDL_GetError() << std::endl;
      Exit(1);
    }
  }
}
