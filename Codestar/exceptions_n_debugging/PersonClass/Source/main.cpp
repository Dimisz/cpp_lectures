#include "Person.h"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

int main()
{
  try
  {
    Person person1("Bob");
    Person person2("Sally");
    Person person3("Vadim");
    Person person4("Timm");
    
    cout << "Person 1 name: " << person1.GetName() << endl;
    cout << "Person 2 name: " << person2.GetName() << endl;
    cout << "Person 3 name: " << person3.GetName() << endl;
    cout << "Person 4 name: " << person4.GetName() << endl;
  }
  catch (const runtime_error& err)
  {
    cout << err.what() << endl;
  }
  return 0;
}
