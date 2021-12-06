#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

void ReadAndPrint(const string& path){
  ifstream input(path);
  
  double num;
  string line;
  vector<double> nums;
  
  if(input){
    while(getline(input, line)){
      num = stod(line);
      nums.push_back(num);
    }
  }
  cout << fixed << setprecision(3);
  for (auto& i : nums){
    cout << i << endl;
  }
}

int main(){
  string path = "input.txt";
  ReadAndPrint(path);
  
  return 0;
}
