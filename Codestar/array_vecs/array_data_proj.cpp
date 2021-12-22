#include <iostream>
#include <array>

using namespace std;

int main()
{
  const int ARR_SIZE = 5;
  array<int, ARR_SIZE> my_array{};
  
  int i = 0;
  while (i < ARR_SIZE)
  {
    int num;
    cout << "Enter an integer:" << endl;
    cin >> num;
    my_array[i] = num;
    i++;
  }
  
  cout << "Printing out the array: " << endl;
  for (int i : my_array)
  {
    cout << i * 2<< " ";
  }
  cout << endl;
}
