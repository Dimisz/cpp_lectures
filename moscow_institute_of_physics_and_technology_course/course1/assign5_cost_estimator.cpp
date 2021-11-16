//Cost estimator
//Inputs: n, a, b, x, y ( a< b)
// n, a, b - money, x, y - percents
//n - initial cost
//if n > a, apply discount x(%)
//else if n > b, apply discount y(%)

#include <iostream>

using namespace std;

int main(){
  
  double n, a, b, x, y;
  
  //take input
  cin >> n >> a >> b >> x >> y;
  
  // convert percentage values to decimals
  x = x / 100;
  y = y / 100;
  
  if (n > b){
    cout << (n - (n * y)) << endl;
  }
  else if (n > a){
    cout << (n - (n * x)) << endl;
  }
  else {
    cout << n << endl;
  }

  
  return 0;
}
