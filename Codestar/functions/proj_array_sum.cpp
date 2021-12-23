#include <iostream>
#include <array>
using namespace std;


int SumArray(int arr[], int arr_size);
int SumArrayObj(array<int, 8> arr);

int main()
{
  int arr[] { 2, 5, 2, 10, 20, 15, 100, 25 };
  int size = 8;
  
  cout << SumArray(arr, size) << endl;
  
  array<int, 8> array_obj { 2, 5, 2, 10, 20, 15, 100, 25 };
  cout << SumArrayObj(array_obj) << endl;
  
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

int SumArrayObj(array<int, 8> arr)
{
  int sum {0};
  for (int i = 0; i < arr.size(); i++)
  {
    sum += arr[i];
  }
  return sum;
}
