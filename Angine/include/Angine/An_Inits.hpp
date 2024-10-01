#ifndef An_Inits
#define An_Inits

#include <SDL.h>

namespace An
{
  extern const Uint8* KeyboardState;
  extern SDL_Keymod KeyMod;

  // initializing the Angine. defined in An_Init.cpp
  void Init();

  // makes sure SDL is loaded properly. defined in An_LoadSDL.cpp
  void LoadSDL();

  // sets opengl attributes. defined in An_glAttribs.cpp
  void glAttribs(int major, int minor, int depth_size,
                 int doublebuffer);

  // creates An::Window, the Angine's window. defined in An_CreateWindow.cpp
  void CreateWindow(const char* title, int x, int y, int w, int h,
      Uint32 SDL_WindowFlags);

  // loads glad's GL Loader into SDL_GL_GetProcAddress. defined in 
  //  An_LoadGlad.cpp
  void LoadGlad();

  // creates An::Context based on An::Window. defined in An_CreateContext.cpp
  void CreateContext();

  // prints some info about opengl if glad is loaded properly. defined in
  //  An_LoadGlad.cpp
  void glInfo();

}

#endif
