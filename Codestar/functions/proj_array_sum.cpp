#include <iostream>

using namespace std;


int SumArray(int arr[], int arr_size);

int main()
{
  int arr[] { 2, 5, 2, 10, 20, 15, 100, 25 };
  int size = 8;
  
  cout << SumArray(arr, size) << endl;
  
  return 0;
}

int SumArray(int arr[], int arr_size)
{
  int sum {0};
  for (int i = 0; i < arr_size; i++)
  {
    sum += arr[i];
  }
  return sum;
}
