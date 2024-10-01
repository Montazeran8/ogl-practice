#include "Angine/An_Render.hpp"
#include "Angine/An_Utilities.hpp"
#include <string>

namespace An
{
  // get shader source from a text file.
  void Loadvshader(const char* filename)
  {
    vshader_src = LoadTextFile(filename);
  }

  void Loadfshader(const char* filename)
  {
    fshader_src = LoadTextFile(filename);
  }
}
