#include <iostream>
#include <array>
using namespace std;


int SumArray(int arr[], int arr_size);
int SumArrayObj(array<int, 8> arr);
void SumArrayObj(array<int, 8> arr, int& sum);

int main()
{
  //C-style array
  int arr[] { 2, 5, 2, 10, 20, 15, 100, 25 };
  int size = 8;
  
  cout << "Sum of C-style array:\t"
       << SumArray(arr, size) << endl;
  
  //Array Object
  array<int, 8> array_obj { 2, 5, 2, 10, 20, 15, 100, 25 };
  cout << "Sum of Array Object:\t"
       << SumArrayObj(array_obj) << endl;
  
  //Array Object and sum var passed by reference
  int array_sum {0};
  SumArrayObj(array_obj, array_sum);
  cout << "Sum passed by reference:\t"
       << array_sum << endl;
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

void SumArrayObj(array<int, 8> arr, int& sum)
{
  for (int i = 0; i < arr.size(); i++)
  {
    sum += arr[i];
  }
}
