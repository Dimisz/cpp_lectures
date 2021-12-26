#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;


Dog::Dog(string breed)
{
  if (breed != "Poodle")
  {
    this->breed = breed;
  }
  else
  {
    throw runtime_error("Poodle? That's not a real dog!");
  }
  
}

string Dog::GetBreed() const noexcept
{
  return breed;
}

