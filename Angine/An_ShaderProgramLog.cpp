#include "Angine/An_Render.hpp"
#include "Angine/An_CleanUps.hpp"

#include <iostream>

namespace An
{
  bool ShaderProgramLog()
  {
    bool result;

    // getting size of glLinkProgram log
    int n=8192;
    glGetProgramiv(ShaderProgram,GL_INFO_LOG_LENGTH,&n);

    if(n==0) result = true;
    else
    {
      // getting glLinkProgram log
      GLchar* Log;
      Log=new GLchar[n];
      glGetProgramInfoLog(ShaderProgram,n+1,nullptr,Log);
      std::cout << "\nshader link log(" << n << "): "
        << Log << std::endl;
      delete[] Log;
      Exit(1);
    }

    std::cout << "validating shader program...\n";
    glValidateProgram(ShaderProgram);

    // getting size of glValidateProgram log
    glGetProgramiv(ShaderProgram,GL_INFO_LOG_LENGTH,&n);

    if(n!=0) 
    {
      // getting glValidateProgram log
      GLchar* Log;
      Log=new GLchar[n];
      glGetProgramInfoLog(ShaderProgram,n+1,nullptr,Log);
      std::cout << "\nshader validation log(" << n << "): "
        << Log << std::endl;
      delete[] Log;
      Exit(1);
    }

    return result;
  }
}
