#include <iostream>

using namespace std;


void PrintArr(int arr[2][3])
{
  cout << "Printing forwards..." << endl;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "===========================" << endl;
}

void PrintArrBackwards(int arr[2][3])
{
  cout << "Printing backwards..." << endl;
  for (int i = 1; i >= 0; i--)
  {
    for (int j = 2; j >= 0; j--)
    {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "===========================" << endl;
}

int main()
{
  
  int my_nums[2][3]{
    {1, 2, 3},
    {4, 5, 6}
  };
  //cout << my_nums[0][2] << endl;
  PrintArr(my_nums);
  my_nums[1][0] = 12;
  PrintArr(my_nums);
  PrintArrBackwards(my_nums);
  return 0;
}
