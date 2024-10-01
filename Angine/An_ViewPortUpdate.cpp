#include "Angine/An_Utilities.hpp"
#include "Angine/An_Globals.hpp"

#include "glad/glad.h"
#include <iostream>

namespace An
{
  void ViewPortUpdate(){
    int w,h;
    SDL_GL_GetDrawableSize(Window,&w,&h);

    GLint* xywh = new GLint[4];
    glGetIntegerv(GL_VIEWPORT,xywh);

    if(w!=xywh[2]||h!=xywh[3])
    {
      glViewport(0,0,w,h);
      std::cout << "\nViewport resized to: " <<
        "w: " << w << ",h: " << h << std::endl;
    }
    delete[] xywh;
  }
}
