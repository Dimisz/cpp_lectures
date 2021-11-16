// write a function 'factorial'
// returns int
// takes int as an input (not larger than 10)

#include <iostream>
using namespace std;

int Factorial(int x){
  int result = 1;
  for (int i = x; i > 0; --i){
    result *= i;
  }
  return result;
}

int main(){
  int x;
  cin >> x;
  Factorial(x);
//  int res = Factorial(x);
//  cout << res << endl;
  return 0;
}
