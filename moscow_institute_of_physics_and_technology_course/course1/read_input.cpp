#include <iostream>
#include <string>

#include <fstream> // reaading and writing - inherits from iostream
using namespace std;

void ReadAll(const string& path){
  ifstream input(path);

  if (input){
    string line;
    
    while(getline(input, line)){
      cout << line << endl;
    }
  }
//  else {
//    cout << "error" << endl;
//  }
  
}

int main(){
  string path = "input.txt";
  ReadAll(path);
  
  return 0;
}
