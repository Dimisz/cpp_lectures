#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  for (int i{10}; i >= 0; --i){
    cout << i <<endl;
  }
  
  
  for (int i{0}, j{10}; i < 5; i++, j+=10){
    cout << "i:\t" << i << "\tj:\t" << j << endl;
  }
  
  
  for (int i{0}; i <= 20; i++){
    cout << i << ((i % 2 == 0) ? ": even" : ": odd") << endl;
  }
  
  
  vector<int> nums {10,20,30,40,50};
  for (int i{0}; i < nums.size(); i++){
    cout << nums[i] << endl;
  }
  return 0;
}
