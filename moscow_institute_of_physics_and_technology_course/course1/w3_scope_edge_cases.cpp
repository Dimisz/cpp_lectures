#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <chrono>


using namespace std;
//using namespace std::chrono;

string EstimateLength(const string& s){
  return s.size() > 10 ? "long" : "short";
}

string GetPositivity(int x) {
    return x > 0 ? "positive"
                 : (x == 0 ? "zero" : "negative");
}

int main(){
//  string s;
//  s += "Hello";
//  {
//    s += " world";
//  }
//  cout << s;
  
//  int value;
//  value += 15;
//  cout << value;
  
//  int a = 5;
//  if (a > 0){
//    int b = 5;
//  }
//  cout << a + b;
  
//  cout << EstimateLength("five") << endl;
  cout << GetPositivity(-5);
  return 0;
}
