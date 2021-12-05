#include <iostream>
#include <string>

#include <fstream> // reaading and writing - inherits from iostream
using namespace std;

void ReadAndWrite(const string& input_path, const string& output_path){
  ifstream input(input_path);

  if (input){
    string line;
    
    ofstream output(output_path, ios::trunc);
    while(getline(input, line)){
      
      output << line << endl;
    }
  }
//  else {
//    cout << "error" << endl;
//  }
  
}

int main(){
  string input_path = "input.txt";
  string output_path = "output.txt";
  ReadAndWrite(input_path, output_path);
  
  return 0;
}
