#include <iostream>

using namespace std;

void ChangeVal1(int num);
void ChangeVal2(int& num);
void ThreeTimesN(int n1, int& n2);
int main()
{
  int my_num = 20;
  ChangeVal1(my_num);
  cout << "After passing by value: " << my_num << endl;
  ChangeVal2(my_num);
  cout << "After passing by reference: " << my_num << endl;
  
  cout << "====================================" << endl;
  int n1, n2 = 0;
  cout << "Enter an integer to multiply by 3: " << endl;
  cin >> n1;
  cout << "n2 before the function call: " << n2 << endl;
  ThreeTimesN(n1, n2);
  cout << "n2 after the function call: " << n2 << endl;
  return 0;
}

void ChangeVal1(int num)
{
  num = 100;
}

void ChangeVal2(int& num)
{
  num = 100;
}

void ThreeTimesN(int n1, int& n2)
{
  cout << "n2 inside the function before the assignmment: "
  << n2 << endl;
  
  n2 = n1 * 3;
  cout << "n2 inside the function after the assignmment: "
  << n2 << endl;
}


