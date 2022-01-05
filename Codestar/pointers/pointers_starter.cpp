#include <iostream>

using namespace std;

int main()
{
  int myInt = 150;
  int* somePtr = &myInt;
  
  
  cout << "myInt is originally: " << myInt << endl;
  cout << "pointer holds value: " << somePtr << endl;
  cout << "pointer dereferenced: " << *somePtr << endl;
  
  *somePtr = 200;
  cout << "myInt is now: " << myInt << endl;
  
  
  double myDouble = 3.14159;
  double* my_double_ptr = &myDouble;
  
  cout << "myDouble: " << myDouble << endl;
  cout << "pointer to myDoouble: " << my_double_ptr << endl;
  cout << "pointer dereferenced: " << *my_double_ptr << endl;
  return 0;
}
