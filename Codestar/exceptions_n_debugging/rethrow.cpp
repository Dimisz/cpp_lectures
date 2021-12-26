#include <iostream>
#include <stdexcept>
using namespace std;

void ProcessPositive(int num);
void DoSomething(int num);

int main()
{
  int num;
  
  try
  {
    cout << "Enter a number to process!" << endl;
    cin >> num;
    DoSomething(num);
    cout << "main was able to completely process the num!" << endl;
  }
  catch(const invalid_argument& err)
  {
    cout << "main says there's an error!" << endl;
    cerr << err.what() << endl;
  }
  catch(const out_of_range& err)
  {
    cout << "main says the number is too big" << endl;
    cerr << err.what() << endl;
  }
  return 0;
}

//initially throws an exception
void ProcessPositive(int num)
{
  cout << "Welcome to the positive integer processor!" << endl;
  if ((num >= 0)&&(num <= 100))
  {
    cout << "Good job! You passed in a positive num to process!" << endl;
  }
  else if (num > 100)
  {
    cout << "ProcessPositive says the number is too big" << endl;
    throw out_of_range("Number cannot be greater than 100");
  }
  else{
    throw invalid_argument("Negative number passed in!");
  }
}


//rethrows the exception
void DoSomething(int num)
{
  try
  {
    ProcessPositive(num);
    cout << "Do something can process that num!" << endl;
  }
  catch(const invalid_argument& err)
  {
    cout << "DoSomething found a problem" << endl;
    throw; //rethrowing by default
  }
  catch(const out_of_range& err)
  {
    cout << "DoSomething says the number is too big" << endl;
    throw;
  }
}
