// given two real numbers a and b
// find their largest common divisor

#include <iostream>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  
  int max_common_divisor;
  
//  int smaller = (a <= b) ? a : b;
//
//  for (int i = smaller; i > 0; --i){
//    if ((a % i == 0) && (b % i == 0)){
//      max_common_divisor = i;
//      break;
//    }
//  }
  
// Solution above works but it's not the fastest possible solution

// Euclidean algorrithm
  while (a > 0 && b > 0){
    if (a > b){
      a = a % b;
    }
    else {
      b = b % a;
    }
  }
  
  max_common_divisor = a + b;
  cout << max_common_divisor;
  
  
  return 0;
}
