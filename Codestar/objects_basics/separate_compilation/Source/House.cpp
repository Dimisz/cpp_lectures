#include "House.h"
#include <iostream>
#include <string>
  

  House::House()
  {
    this->num_stores = 1;
    this->num_windows = 4;
    this->color = "white";
  }

  House::House(int num_stores, int num_windows, string color)
  {
    this->num_stores = num_stores;
    this->num_windows = num_windows;
    this->color = color;
  }

  House::~House()
{
  cout << "The " << color << " house with " << num_stores
       << " stores and " << num_windows
      << " windows is destroyed." << endl;
}
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

  void House::PrintHouseData() const
  {
    cout << "The house is " << GetColor()
         << " and has " << GetNumStores() << " stores "
         << "and " << GetNumWindows() << " windows." << endl;
  }
  
