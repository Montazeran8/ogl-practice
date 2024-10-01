#include "Angine/An_Events.hpp"

namespace An
{

  SDL_Event Event;

  void Events()
  {
    while(SDL_PollEvent(&Event))
    {
      Input();
      WindowResized();
    }
  }
}
