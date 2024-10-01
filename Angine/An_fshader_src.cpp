#include "Angine/An_Render.hpp"
#include <string>

namespace An
{
  std::string fshader_src=
    "#version 410 core\n"
    "out vec4 gl_Color;\n"
    "void main()\n"
    "{\n"
    "  gl_Color = vec4(.6,.4,.1,1.);\n"
    "}\n";
}
