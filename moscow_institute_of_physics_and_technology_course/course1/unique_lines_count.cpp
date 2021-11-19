// find how many unique lines are there among the given lines
// INPUTS
// q - num_operations
// q lines

// OUTPUT
// single number - number of unique lines


#include <iostream>
#include <set>

using namespace std;

int main(){
  set<string> lines;
  int num_operations;
  cin >> num_operations;
  
  for (int i = 0; i < num_operations; ++i){
    string line;
    cin >> line;
    
    lines.insert(line);
  }
  cout << lines.size() << endl;
  
  return 0;
}
