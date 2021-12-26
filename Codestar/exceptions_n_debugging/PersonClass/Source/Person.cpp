#include "Person.h"
#include <string>
#include <stdexcept>
using namespace std;

Person::Person(string name)
{
  SetName(name);
}
string Person::GetName() const noexcept
{
  return name;
}
void Person::SetName(string name)
{
  if(name != "Vadim")
  {
    this->name = name;
  }
  else
  {
    throw runtime_error("Vadim??? Vadim blyat!!!");
  }
}
