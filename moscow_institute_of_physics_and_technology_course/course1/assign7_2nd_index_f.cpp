// a string is given as an input
// find a second occurence of the letter 'f' in the str
// if letter 'f' occurs only once -> print out -1
// if 'f' doesn't occur -> print out -2

#include <iostream>
#include <string>
using namespace std;

int main(){
  string a;
  cin >> a;
  
  int f_count = 0;
  for (int i = 0; i < a.length(); ++i){
    if (a[i] == 'f'){
      ++f_count;
      if (f_count == 2){
        cout << i;
        break;
      }
    }
  }
  
  
  if (f_count == 1){
    cout << -1;
  }
  else if (f_count == 0){
    cout << -2;
  }
  
  return 0;
}
