// write a function void Reverse(vector<int>& v)
// the function reverts elements of a given vector

#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v){
  for (int i = (v.size() - 1); i >= 0; --i){
    v.push_back(v.at(i));
    v.erase(v.begin()+i);
  }
}

// Uncomment to run the function

//int main(){
//
//  vector<int> numbers = {1, 5, 3, 4, 2};
//  Reverse(numbers);
//  for (auto i : numbers){
//    cout << i << " ";
//  }
//
//  return 0;
//}
