// write a function UpdateIfGreater
// takes two ints x, y
// the function doesn't return anything

#include <iostream>

using namespace std;

void UpdateIfGreater(int a, int& b){
  if (a > b)
    b = a;
}

//int main(){
//  
////  int a = 4;
////  int b = 2;
//  UpdateIfGreater(a, b);
////  cout << b << endl;
//  
//  
//  return 0;
//}
