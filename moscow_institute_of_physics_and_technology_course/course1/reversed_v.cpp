// write a function vector<int> Reversed(const vector<int>& v)
// the function reverts elements of a given vector
// returns a vector (reversed input)

#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v){
  vector<int> temp;
  for (int i = (v.size() - 1); i >= 0; --i){
    temp.push_back(v.at(i));
  }
  return temp;
}

// Uncomment to run the function
//
//int main(){
//
//  vector<int> numbers = {1, 5, 3, 4, 2};
//  vector<int> result = Reversed(numbers);
//  for (auto i : result){
//    cout << i << " ";
//  }
//
//  return 0;
//}
