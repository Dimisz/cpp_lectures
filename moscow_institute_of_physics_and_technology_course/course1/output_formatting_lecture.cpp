#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip> //fixed format of nums
using namespace std;


// setw - set width of output field
// setprecision - precision of output (for doubles)
// setfill - filler for setw
// left - left align
void Print(const vector<string>& names, const vector<double>& values, int width){
  for (const auto& n : names){
    cout << setw(width) << n << " ";
  }
  cout << endl;
  //FORMATTING STATEMENTS
  cout << fixed << setprecision(2);
  
  
  for (const auto& val : values){
    cout << setw(width) << val << " ";
  }
  cout << endl;
}


int main(){
  vector<string> names = {"a", "b", "c"};
  vector<double> values = {5, 0.01, 0.000005};
  cout << setfill('.');
  cout << left;
  Print(names, values, 10);
  
  return 0;
}
