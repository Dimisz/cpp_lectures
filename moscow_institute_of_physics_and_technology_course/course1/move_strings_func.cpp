// write a MoveStrings function
// the function takes 2 vectors<string> as an input
// vector<string> source, vector<string> destination
// moves the elements from the 1st vec to the end of the 2nd
// after moving all the elements clears the source vec

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination){
  for (auto i : source){
    destination.push_back(i);
  }
  source.clear();
}

// Uncomment for debugging
// grader accepts the function itself


//int main(){
//  vector<string> source = {"a", "b", "c"};
//  vector<string> destination = {"z"};
//  MoveStrings(source, destination);
//
//  for (auto i : destination){
//    cout << i << " ";
//  }
//  cout << "\n------------------------" << endl;
//  cout << "Size of source: " << source.size() << endl;
//
//  return 0;
//
//}
