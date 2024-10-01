#include "Angine/An_Render.hpp"
#include "glad/glad.h"
namespace An
{
  GLuint CompileShader(GLenum type, const GLchar* src)
  {
    GLuint shader = glCreateShader(type);
    glShaderSource(shader,1,&src,nullptr);
    glCompileShader(shader);
    return shader;
  }
}
