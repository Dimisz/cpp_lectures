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
  else {
    cout << "error" << endl;
  }
  
}

int main(){
//  ifstream input("hello.txt");
//  string line;
//  if (input.is_open()){
//    while(getline(input, line)){
//      cout << line << endl;
//    }
//    cout << "done" << endl;
//  } else {
//    cout << "error" << endl;
//  }
  
  //USING SEPARATOR
//  ifstream input_date("date.txt");
//  string year;
//  string month;
//  string day;
//  if (input_date){
//    getline(input_date, day, '-');
//    getline(input_date, month, '-');
//    getline(input_date, year, '-');
//  }
//  cout << day << " " << month << " " << year << endl;
  
  //USING INPUT OPERATORS
//  int day = 0;
//  int month = 0;
//  int year = 0;
//  if (input_date){
//    input_date >> day;
//    input_date.ignore(1);
//    input_date >> month;
//    input_date.ignore(1);
//    input_date >> year;
//    cout << day << " " << month << " " << year << endl;
//  }
  
  const string path = "output.txt";
  ofstream output(path, ios::app);
  
  output << " helllllo" << endl;
  ReadAll(path);
  
  return 0;
}
