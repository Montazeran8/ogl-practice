#include "Angine/An_Render.hpp"
#include <iostream>
#include <iomanip>

namespace An
{
  // vertex data 
  const std::vector<GLfloat> hi_tri=
  {
    //x    y    z=0
    -0.8f, -0.8f,        //v1
    0.0f,  0.8f,         //v2
    0.8f, -0.8f,         //v3
  };

  const std::vector<GLfloat> tri_color=
  {
    1.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 1.0f,
  };

  const std::vector<GLfloat> tri_pos_col=
  {
    -0.8f,-0.8f,
    1.0f, 0.0f, 0.0f,
    0.8f,-0.8f,
    0.0f, 1.0f, 0.0f,
    0.0f, 0.8f,
    0.0f, 0.0f, 1.0f,
  };

  const std::vector<GLfloat> quad_pos_col=
  {
    -0.8f, -0.8f,
    1.0f, 0.0f, 0.0f,
    -0.8f, 0.8f,
    0.0f, 1.0f, 1.0f,
    0.8f, -0.8f,
    0.0f, 1.0f, 0.0f,
    0.8f, 0.8f,
    1.0f, 0.0f, 1.0f,
  };
  //const std::vector<GLuint> indices=
  //{
    //0,9,10,19,20,29,30,39,40,49,50,59,60,69,70,79,80,89,90,99,
    //0,90,1,91,2,92,3,93,4,94,5,95,6,96,7,97,8,98,9,99,
  //}; // GL_LINES

  const std::vector<GLuint> indices=
  {
     0,
    10, 1,11, 2,12, 3,13, 4,14, 5,15, 6,16, 7,17, 8,18, 9,19,
    29,18,28,17,27,16,26,15,25,14,24,13,23,12,22,11,21,10,20,
    30,21,31,22,32,23,33,24,34,25,35,26,36,27,37,28,38,29,39,
    49,38,48,37,47,36,46,35,45,34,44,33,43,32,42,31,41,30,40,
    50,41,51,42,52,43,53,44,54,45,55,46,56,47,57,48,58,49,59,
    69,58,68,57,67,56,66,55,65,54,64,53,63,52,62,51,61,50,60,
    70,61,71,62,72,63,73,64,74,65,75,66,76,67,77,68,78,69,79,
    89,78,88,77,87,76,86,75,85,74,84,73,83,72,82,71,81,70,80,
    90,81,91,82,92,83,93,84,94,85,95,86,96,87,97,88,98,89,99,

  };// GL_TRIANGLE_STRIP
  

  const std::vector<GLfloat> grid(uint x, uint y)
  {
    if(!(x>1&&y>1)) return std::vector<GLfloat>{};

    GLfloat xr=1.0f/(x-1);
    GLfloat yr=1.0f/(y-1);
    GLfloat min = -0.8f;
    GLfloat max = 0.8f;
    std::vector<GLfloat> grid;
    for(uint i=0;i<x;i++)
      for(uint j=0;j<y;j++)
      {
        GLfloat tx=xr*i;
        GLfloat ty=yr*j;
        grid.push_back((1-ty)*min + ty*max);
        grid.push_back((1-tx)*min + tx*max);
        grid.push_back((float)j/(y-1));
        grid.push_back((float)i/(x-1));
        grid.push_back((float)(i*y+j)/(x*y-1));
      }
    return grid;
  }
  
  void printVerts(const std::vector<GLfloat>&vec)
  {
    for(uint i=0;i<vec.size();i+=5)
    {
      std::cout << std::fixed << std::setprecision(4) <<
          "pos:  " << vec[i] << " , " << vec[static_cast<std::vector<GLfloat, std::allocator<GLfloat>>::size_type>(i) + 1] << "\tcol:  " <<
          vec[static_cast<std::vector<GLfloat, std::allocator<GLfloat>>::size_type>(i) + 2] << " , " << vec[static_cast<std::vector<GLfloat, std::allocator<GLfloat>>::size_type>(i) + 3] << " , " << vec[static_cast<std::vector<GLfloat, std::allocator<GLfloat>>::size_type>(i) + 4] << std::endl;
    }
  }
}
