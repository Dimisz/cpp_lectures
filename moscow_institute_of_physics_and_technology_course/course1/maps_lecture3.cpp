#include <iostream>
#include <map>

using namespace std;

int main(){
  map<string, int> m = {{"one", 1}, {"two", 2}};
  
  //before c++17
  for (const auto& item : m){
    cout << item.first << ": " << item.second << endl;
  }
  
  cout << "Using C++ 17 syntax: " << endl;
  for (const auto& [key, value] : m) {
    cout << key << ": " << value << endl;
  }
  
  return 0;
}
