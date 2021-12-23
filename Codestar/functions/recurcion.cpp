#include <iostream>

using namespace std;

void CountDownFrom(int num);
int SumValues(int num);
int Factorial(int num);

int main()
{
  
  CountDownFrom(10);
  cout << "Sum values: " << endl;
  cout << SumValues(10) << endl;
  cout << "Factorial of 5: " << Factorial(5) << endl;
  cout << "Factorial of 1: " << Factorial(1) << endl;
  cout << "Factorial of 0: " << Factorial(0) << endl;
  cout << "Factorial of 6: " << Factorial(6) << endl;
  return 0;
}


void CountDownFrom(int num)
{
  if (num >= 0)
  {
    cout << num << endl;
    CountDownFrom(num - 1);
  }
}

int SumValues(int num)
{
  if (num == 1)
  {
    return num;
  }
  else
  {
    return num + SumValues(num - 1);
  }
}


int Factorial(int num)
{
  if (num > 1)
  {
    return num * Factorial(num - 1);
  }
  return num;
}
