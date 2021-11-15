#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //for count

using namespace std;

int main(){
  
  //ITERATIONS
  string s = "abcdefg";
  for (char c : s){
    cout << c << ",";
  }
  cout << "\n-----------------" << endl;
  
  vector<int> nums = {1, 5, 6, 7};
  for (int c : nums){
    cout << c << ",";
  }
  
  cout << "\n-----------------" << endl;
  
  
  //COUNTS
  vector<int> nums2 = {1, 5, 2, 3, 5};
  int qty = 0;
  for (auto x : nums2){
    if (x == 5){
      qty += 1;
    }
  }
  cout << "nums2 contains " << qty << " 5s" << endl;
  cout << "\n-----------------" << endl;
  
  //COUNT USING <algorithm> lib
  int quantity = count(begin(nums2), end(nums2), 5);
  cout << "nums2 contains " << qty << " fives" << endl;
  cout << "\n-----------------" << endl;
  
  //SORTING WITH <algorithm>
  cout << "Before sorting: " << endl;
  for (auto i : nums2){
    cout << i << " ";
  }
  
  cout << "\n\nAfter sorting: " << endl;
  sort(begin(nums2), end(nums2));
  for (auto i: nums2){
    cout << i << " ";
  }
  cout << "\n-----------------" << endl;
  
  
  //Sorting string
  string word = "babax";
  sort(begin(word), end(word));
  cout << word << " " << count(begin(word), end(word), 'a');
  
  return 0;
}
