#include "House.h"

  void House::SetNumStores(int num_stores)
  {
    this->num_stores = num_stores;
  }

  int House::GetNumStores() const
  {
    return num_stores;
  }
  
  void House::SetNumWindows(int num_windows)
  {
    this->num_windows = num_windows;
  }
  
  int House::GetNumWindows() const
  {
    return num_windows;
  }
  
  void House::SetColor(string color)
  {
    this->color = color;
  }
  string House::GetColor() const
  {
    return color;
  }
  
