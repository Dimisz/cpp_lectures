#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Print(const vector<int>& v, const string& title){
  cout << title << ": ";
  for (auto i : v){
    cout << i << " ";
  }
  cout << endl;
}

bool Gt2(int x){
  if (x > 2){
    return true;
  }
  return false;
}

int main(){
  vector<int> v{1, 3, 2, 5, 4, 2};
  
  
  //cout << count(begin(v), end(v), 2) << endl;
  
  //cout << count_if(begin(v), end(v), Gt2) << endl;
  
//  int threshold;
//  cin >> threshold;
//
//  //LAMBDA
//  cout << count_if(begin(v), end(v), [threshold](int i){
//    return (threshold > i);});
  
//  int cnt = 0;
//  for (const auto& i : v){
//    cnt += (i % 2 != 0);
//  }
  
//  int cnt = count_if(begin(v), end(v), [](int x){ return x % 2 != 0;});
  
  int cnt = count(begin(v), end(v), [](int x){return x % 2 != 0;});
  
  cout << cnt;
  
  return 0;
}
