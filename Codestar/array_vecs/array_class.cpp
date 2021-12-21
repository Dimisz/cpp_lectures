#include <iostream>
#include <array>


using namespace std;

int main()
{
//  array<int, 5> my_int_array{};
//  my_int_array[0] = 2;
//  my_int_array[3] = 6;
//  for (int a : my_int_array)
//  {
//    cout << a << endl;
//  }
//  cout << "Size of array: " << my_int_array.size() << endl;
  
  cout << "TwiceNumbers Challenge: " << endl;
  
  const int array_size = 10; //MUST BE CONST
  
  array<int, array_size> my_array{};
  for (int i = 0; i < array_size; i++){
    my_array[i] = i * 2;
  }

  for (int num : my_array){
    cout << num << " ";
  }
  cout << endl;
  return 0;
}
