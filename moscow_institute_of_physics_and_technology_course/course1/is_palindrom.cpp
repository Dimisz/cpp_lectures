// write a function named 'isPalindrom'
// the function returns 'bool'
// takes a string as an input and returns if the string
// is a palindrom or not (reading the same from both left to
// right and right to left)

#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string x){
  if (x.size() == 1 || x.size() == 0){
    return true;
  }
  else {
    string temp = "";
    for (int i = (x.size()-1); i >= 0; --i){
      temp += x.at(i);
    }
//    cout << "x: " << x << endl;
//    cout << "temp: " << temp << endl;
    if (x == temp){
      return true;
    }
  }
  return false;
}
int main(){
  string x;
  getline(cin, x);
  
  IsPalindrom(x);
//  cout << IsPalindrom(x);
  return 0;
}
