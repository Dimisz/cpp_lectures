#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

void PrintTable(const string& path){
  ifstream input(path);
  int rows, cols;
  
  if (input){
    input >> rows;
//    cout << "Rows " << rows << endl;
    input.ignore(1);
    input >> cols;
//    cout << "colls " << cols << endl;
    
    for (int i = 0; i < rows; i++){
      int cell;
      vector<int> cells;
      
      //get a line of nums
      for (int j = 0; j < cols-1; j++){
        input >> cell;
        input.ignore(1);
        cells.push_back(cell);
      }
      input >> cell;
      cells.push_back(cell);
      //finished collecting a line
      
      //print the line out
      for (int j = 0; j < cells.size(); j++){
        cout << setw(10) << cells.at(j);
        if (j < (cells.size()-1)){
          cout << " ";
        }
      }
      
      if (i < (rows-1)){
        cout << endl;
      }
    }
  }
  
}


int main(){
  string path = "input.txt";
  //cout << setfill(".");
  cout << right;
  PrintTable(path);
  
  return 0;
}
