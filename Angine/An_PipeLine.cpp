#include "Angine/An_Render.hpp"
#include "Angine/An_Globals.hpp"

#include <SDL.h>

namespace An
{
  void PipeLine()
  {
    PreDraw();
    Draw();
    //SDL_Delay(134);
    SDL_GL_SwapWindow(Window);
  }
}
