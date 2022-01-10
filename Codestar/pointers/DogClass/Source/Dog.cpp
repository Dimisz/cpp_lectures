#include "../Headers/Dog.h"

Dog::Dog(string name, string breed)
{
  this->name = name;
  this->breed = breed;
}
string Dog::GetName() const
{
  return name;
}
string Dog::GetBreed() const
{
  return breed;
}
