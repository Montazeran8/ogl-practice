#ifndef An_Render
#define An_Render

#include "glad/glad.h"
#include <vector>
#include <string>

typedef unsigned int uint;

namespace An
{

  // vertex data. defined in An_VertexData.cpp
  extern const std::vector<GLfloat> hi_tri;
  extern const std::vector<GLfloat> tri_color;
  extern const std::vector<GLfloat> tri_pos_col;
  extern const std::vector<GLfloat> quad_pos_col;
  extern const std::vector<GLuint> indices;

  // defined in An_Render.cpp
  extern GLuint VAO;
  extern GLuint VBO;
  extern GLuint VBO_Color;
  extern GLuint IBO;
  extern GLuint ShaderProgram;
  extern std::vector<GLfloat> BGColor;

  // shader sources are defined in 
  // An_vshader_src.cpp and An_fshader_src.cpp
  extern std::string vshader_src;
  extern std::string fshader_src;

  // defined in An_PipeLine.cpp
  void PipeLine();

  // creates some vertex data and sends it to the GPU.
  // defined in An_TalkToTheVertex.cpp
  void TalkToTheVertex();

  // generates a grid of vertices of x rows and y columns.
  // *** x and y must be greater than 1 ***
  // defined in An_VertexData.cpp
  const std::vector<GLfloat> grid(uint x, uint y);

  // prints the elements of vec. defined in An_VertexData.cpp
  void printVerts(const std::vector<GLfloat>&vec);

  // defined in An_PreDraw.cpp
  void PreDraw();

  // clears color and depth buffer. defined in An_ClearColor.cpp
  void ClearColor();

  // defined in An_Draw.cpp
  void Draw();

  // creates a shader program into An::ShaderProgram.
  // defined in An_CreateShaderProgram.cpp
  void CreateShaderProgram(const GLchar* vshader_src,
                           const GLchar* fshader_src);

  // log for glLinkProgram and glValidateProgram.
  // defined in An_ShaderProgramLog.cpp
  bool ShaderProgramLog();

  // compiles a shader source text into a shader.
  // defined in An_ComplieShader.cpp
  GLuint CompileShader(GLenum type, const GLchar* src);

  // get shader source from a text file for An::vshader_src.
  // defined in An_LoadShaderFiles.cpp
  void Loadvshader(const char* filename);
  // get shader source from a text file for An::fshader_src.
  // defined in An_LoadShaderFiles.cpp
  void Loadfshader(const char* filename);

}

#endif
