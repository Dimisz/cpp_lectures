// given an int as input
// convert it to binary
// without leading zeroes

#include <iostream>
#include <cmath>
using namespace std;

//recursive solution
void dec_to_bin(int decimal){
  if (decimal > 0){
    dec_to_bin(decimal/2);
    cout << decimal % 2;
  }
}

int main(){
  
  int decimal;
  cin >> decimal;
  
  dec_to_bin(decimal);
  
  return 0;
}
