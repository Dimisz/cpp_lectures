// input: a line of numbers
// first input: n - how manny nums will follow
// sort by abs values

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int num_inputs;
  cin >> num_inputs;
  
  vector<int> nums;
  for (int i = 0; i < num_inputs; ++i){
    int x;
    cin >> x;
    nums.push_back(x);
  }
  
  sort(begin(nums), end(nums), [](int i, int j){ return (abs(i) < abs(j));});
  
  for (auto& i : nums){
    cout << i << " ";
    
  }
  cout << endl;
  return 0;
}
