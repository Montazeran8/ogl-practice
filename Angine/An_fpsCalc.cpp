#include "Angine/An_Utilities.hpp"

#include <iostream>
#include <chrono>

namespace An
{
  std::chrono::time_point<std::chrono::steady_clock> timepoint;
  int numFrame=0;
  bool firstTime=true;
  // prints out the fps.
  void fpsCalc(float interval_sec)
  {
    if(firstTime)
    {
      firstTime=false;
      timepoint=std::chrono::steady_clock::now();
    }

    numFrame++;
    auto now = std::chrono::steady_clock::now();
    auto d = std::chrono::duration<float>(now-timepoint);
    auto _d = std::chrono::duration<float> (interval_sec);
    if(d >= _d)
    {
      timepoint = now;
      std::cout << "[fps = " << (int)(numFrame/interval_sec) << "] "
        << std::flush;
      numFrame = 0;
    }
  }
}
