#include "Angine/An_Utilities.hpp"
#include <string>
#include <fstream>
#include <iostream>

namespace An
{
  std::string LoadTextFile(const char* filename)
  {
    std::ifstream file(filename);
    std::string text = "";
    std::string line = "";

    if(!file.is_open())
      std::cout << "file \"" << filename <<"\" not found.\n";
    else
    {
      while(getline(file,line))
        text += line + '\n';

      file.close();
    }   

    return text;
  }
}
