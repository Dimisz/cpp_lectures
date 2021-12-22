#include <iostream>

using namespace std;

int GetResult(int num1, int num2);
string GetResult(string str1, string str2);
int GetResult(int num);

int main()
{
  cout << "2 + 2 = " << GetResult(2, 2) << endl;
  cout << "Vladimir + Solovyov = " << GetResult("Vladimir", "Solovyov") << endl;
  
  cout << "Number cubed: " << GetResult(5) << endl;
  
  return 0;
}


int GetResult(int num1, int num2)
{
  return num1 + num2;
}

string GetResult(string str1, string str2)
{
  return str1 + " " + str2;
}

int GetResult(int num1)
{
  return num1 * num1 * num1;
}
