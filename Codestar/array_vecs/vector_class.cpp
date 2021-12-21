#include <iostream>
#include <vector>
#include <string>

using namespace std;
void PrintVec(const vector<string>& v)
{
  cout << "Printing out..." << endl;
  for (auto i : v)
  {
    cout << i << endl;
  }
}

void PrintVec(const vector<int>& v)
{
  cout << "Printing out..." << endl;
  for (auto i : v)
  {
    cout << i << endl;
  }
}

int main()
{
  vector<int> nums;
  vector<string> words(3);
  
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3);
  cout << "Size of nums vector: " << nums.size() << endl;
  
  words[0] = "John";
  words[1] = "Bob";
  words[2] = "Sally";
  words.push_back("Dimi");
  
  PrintVec(nums);
  
  PrintVec(words);
  
  cout << "Front and back: " << endl;
  cout << "Front: " << words.front() << endl;
  cout << "Back: " << words.back() << endl;
  words.pop_back();
  cout << "After pop_back..." << endl;
  PrintVec(words);
  words.insert(words.begin()+1, "Stephen");
  cout << "After inserting at 0: "<<endl;
  PrintVec(words);
  
  
  
  return 0;
}
