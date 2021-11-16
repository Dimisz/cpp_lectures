// get to integers from input: a, b
// a <= b
// a >= 1
// b <= 30000
// print out all the even numbers between a & b separated by
// a space

#include <iostream>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; ++i){
    if (i % 2 == 0){
      cout << i << " ";
    }
  }
  
  return 0;
}
