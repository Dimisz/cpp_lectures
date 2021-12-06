#include <iostream>
#include <vector>
#include <string>

using namespace std;

string GetPositivity(int x){
  if (x > 0){
    return "positive";
  }
  else if (x < 0){
    return "negative";
  }
  else {
    return "zero";
  }
}
void PrintPositivity(int x){
  string positivity = GetPositivity(x);
  
  cout << x << " is " << positivity << endl;
}

void PrintGreaterThanZero(int x){
  string greater_than = (x > 0) ? "greater" : "equal or less";
  cout << x << " is " << greater_than << " than zero" << endl;
}
int main(){
  PrintPositivity(2);
  PrintPositivity(0);
  PrintPositivity(-5);
  
  PrintGreaterThanZero(10);
  PrintGreaterThanZero(-2);
  
  
  return 0;
}
