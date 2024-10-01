#include "Angine/An_Render.hpp"

namespace An
{
  void ClearColor()
  {
    glClearColor(BGColor[0],BGColor[1],BGColor[2],BGColor[3]);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  }
}
