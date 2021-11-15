#include <iostream>
#include <string>

using namespace std;

int main(){
  string a, b, c;
  cin >> a >> b >> c;
  
  
  string min_str = a;
  
  if (b < min_str){
    min_str = b;
  }
  
  if (c < min_str){
    min_str = c;
  }
  
  cout << min_str << endl;
  
  return 0;
}
