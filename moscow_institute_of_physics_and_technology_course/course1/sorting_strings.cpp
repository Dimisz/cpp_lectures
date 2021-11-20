// input: a line of strings
// first input: n - how many strings will follow
// sort by irrespective of case

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  int num_inputs;
  cin >> num_inputs;
  
  vector<string> lines;
  for (int i = 0; i < num_inputs; ++i){
    string x;
    cin >> x;
    lines.push_back(x);
  }
  
  sort(begin(lines), end(lines), [](string i, string j){
    string str1, str2;
    for (char c : i){
      str1 += tolower(c);
    }
    for (char c : j){
      str2 += tolower(c);
    }
    return (str1 < str2);
  });
  
  for (auto& i : lines){
    cout << i << " ";
    
  }
  cout << endl;
  return 0;
}

