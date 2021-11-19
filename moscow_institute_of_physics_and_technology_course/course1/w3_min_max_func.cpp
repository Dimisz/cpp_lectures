#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void PrintVec(const vector<int>& v, const string& title){
  cout << title << ": " << endl;
  for (auto i : v){
    cout << i << " ";
  }
  cout << endl;
}


int main(){
  string s1 = "abc";
  string s2 = "bca";
  
  cout << min(2, 3) << endl;
  cout << max(2, 3) << endl;
  cout << min(s1, s2) << endl;
  
  vector<int> v {1, 3, 2, 5, 4};
  PrintVec(v, "init");
  
  sort(begin(v), end(v));
  PrintVec(v, "sort");
  
  return 0;
}
