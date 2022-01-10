#include <iostream>
using namespace std;

void FillArray(int size, int arr[]);
void PrintArray(int size, int arr[]);

int main()
{
  const int ARR_SIZE = 5; //like standard arrays
  
  int* my_array = new int[ARR_SIZE];
  FillArray(ARR_SIZE, my_array);
  PrintArray(ARR_SIZE, my_array);
//  for (int i = 0; i < ARR_SIZE; i++)
//  {
//    my_array[i] = i * 2;
//  }
//
//  for (int i = 0; i < ARR_SIZE; i++)
//  {
//    cout << my_array[i] << endl;
//  }
  
  
  delete[] my_array;
  my_array = nullptr;
  
  // Create array dynamically asking user for its size
  // Cannot do this without pointers
  int size;
  cout << "Enter size of the array: " << endl;
  cin >> size;
  
  int* user_array = new int[size];
  
  FillArray(size, user_array);
  PrintArray(size, user_array);
  
  delete[] user_array;
  user_array = nullptr;
  return 0;
}


void FillArray(int size, int arr[])
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = i * 2;
  }
}


void PrintArray(int size, int arr[])
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }
  
}
