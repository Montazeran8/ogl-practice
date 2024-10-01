#ifndef An_CleanUps
#define An_CleanUps

namespace An
{
  // clean ups before exiting the Angine.
  // defined in An_CleanUps.cpp
  void CleanUps();

  // deletes An::Context. defined in An_CleanUps.cpp
  void DeleteContext();

  // destroys the An::Window. defined in An_CleanUps.cpp
  void DestroyWindow();

  // exit program returning 'status'
  void Exit(int status);
}

#endif
