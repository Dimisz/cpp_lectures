#include <iostream>
using namespace std;


int main(){
  
  int num{};
  
  cout << "Enter and integer: " << endl;
  cin >> num;
  
  cout << num << ((num % 2 == 0) ? " is even" : " is odd") << endl;
  
  int firstNum, secondNum;
  cout << "Enter two numbers separated by a space: ";
  cin >> firstNum >> secondNum;
  cout << "The largest is: " << ((firstNum >= secondNum) ? firstNum : secondNum) << endl;
  
  return 0;
}
