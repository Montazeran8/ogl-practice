#include "Angine/An_Render.hpp"
#include "Angine/An_CleanUps.hpp"
#include <iostream>

namespace An
{
  void glClearErrors(){
    while(glGetError()!=GL_NO_ERROR);
  }

  bool glIsError(const char* func, int line, const char* file){
    if(GLenum err = glGetError())
    {
      std::cout << "glError: " << err << " in file "<< file << 
        " line " << line << " : " << func << std::endl;
      return true;
    }
    return false;
  }

#define glCheck(x) glClearErrors();x;if(glIsError(#x,__LINE__,__FILE_NAME__)) Exit(1);
  void Draw()
  {
    glBindVertexArray(VAO);
    //glDrawArrays(GL_TRIANGLES,0,3);
    //glCheck(glDrawElements(GL_LINES,indices.size(),GL_UNSIGNED_INT,
                   //(GLvoid*)(sizeof(GLuint)*0)));
    glDrawElements(GL_TRIANGLE_STRIP, static_cast<GLsizei>(indices.size()), GL_UNSIGNED_INT,
                   (GLvoid*)(sizeof(GLuint)*0));
  }
}
