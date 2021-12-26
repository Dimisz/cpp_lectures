#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person
{
public:
  Person(string name);
  string GetName() const noexcept;
  void SetName(string name);
private:
  string name;
  
};
#endif
