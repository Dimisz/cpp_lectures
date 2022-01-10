#include <iostream>

using namespace std;

int main()
{
  int* my_int_ptr = new int(123); //using 'new' we start managing memory manually
  cout << *my_int_ptr << endl;
  delete my_int_ptr;//return the memory
  my_int_ptr = nullptr;
  
  
  bool* my_bool_ptr = new bool(true);
  cout << boolalpha << *my_bool_ptr << endl;
  delete my_bool_ptr;
  my_bool_ptr = nullptr;
  
  
  return 0;
}

