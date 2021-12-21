#include <iostream>
#include <string>
using namespace std;


int main()
{
  const int ARRAY_SIZE = 5;
  
  int my_array[ARRAY_SIZE];
  my_array[0] = 15;
  my_array[1] = 20;
  my_array[2] = 22;
  my_array[3] = 13;
  my_array[4] = 6;
  
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    cout << my_array[i] << endl;
  }
  
  string names[4] = {"Bob", "Sally", "John", "Ed"};
  
//  for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++){
//    cout << names[i] << endl;
//  }
  
  for (string n : names){
    cout << "--" << n << endl;
  }
  
  cout << "Populating 1 thru 10..." << endl;
  int nums[10];
  for (int i = 0; i < 10; i++){
    nums[i] = i + 1;
  }
  cout << "Printing 1 thru 10..." << endl;
  for (int i : nums){
    cout << i << " ";
  }
  cout << endl;
  
  
  return 0;
}
