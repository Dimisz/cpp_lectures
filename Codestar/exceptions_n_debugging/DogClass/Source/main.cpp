#include "Dog.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> breeds = {"Spitz", "Poodle", "Boxer",
    "Shepard", "Poodle", "Pekinese"};
  for (string breed : breeds)
  {
    try
    {
      Dog d(breed);
      cout << d.GetBreed() << endl;
    }
    catch(runtime_error& err)
    {
      cerr << err.what() << endl;
    }
  }
  
  return 0;
}
