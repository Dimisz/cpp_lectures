#include <iostream>
#include <vector>


using namespace std;

int main()
{
  vector<int> nums;
  int user_input {0};
  
  while(user_input >= 0)
  {
    cout << "Enter a positive integer to add to the vector, ";
    cout << "or negative integer to quit!" << endl;
    cin >> user_input;
    
    if (user_input >= 0)
    {
      nums.push_back(user_input);
    }
  }
  
  cout << "Now here are double the amounts: " << endl;
  for (int i : nums){
    cout << i * 2 << endl;
  }
  
  return 0;
}
