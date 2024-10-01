#include "Angine/An_Inits.hpp"

#include <iostream>

namespace An
{
  // sets opengl attributes. defined in An_SetAttributes.cpp
  void glAttribs(int major, int minor, int depth_size,
                 int doublebuffer)
  {
    if(SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION,major)<0)
    {
      std::cout << "\nglAttribs MAJOR_VERSION failed: ";
      std::cerr << SDL_GetError() << std::endl;
    }

    if(SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION,minor)<0)
    {
      std::cout << "\nglAttribs MINOR_VERSION failed: ";
      std::cerr << SDL_GetError() << std::endl;
    }

    if(SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
          SDL_GL_CONTEXT_PROFILE_CORE)<0)
    {
      std::cout << "\nglAttribs PROFILE_MASK failed: ";
      std::cerr << SDL_GetError() << std::endl;
    }

    if(SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER,doublebuffer)<0)
    {
      std::cout << "\nglAttribs DOUBLEBUFFER failed: ";
      std::cerr << SDL_GetError() << std::endl;
    }

    if(SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE,depth_size)<0)
    {
      std::cout << "\nglAttribs DEPTH_SIZE failed: ";
      std::cerr << SDL_GetError() << std::endl;
    }
  }
}
