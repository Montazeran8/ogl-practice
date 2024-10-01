#include "Angine/An_Events.hpp"
#include "Angine/An_Globals.hpp"
#include <iostream>

namespace An
{
  // handles inputs.
  void Input()
  {
      if (Event.type == SDL_QUIT)
      {
        IsPlaying = false;
      }

      KeyMod = SDL_GetModState();
      if(KeyboardState[SDL_SCANCODE_Q] && (KeyMod & KMOD_CTRL))
        IsPlaying = false;
  }
}
