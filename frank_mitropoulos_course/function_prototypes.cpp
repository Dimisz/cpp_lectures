#include <iostream>
#include <string>
#include <vector>

using namespace std;
//function prototypes
void pass_by_value(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value(int num){
  num = 100;
}

void pass_by_value2(string s){
  s = "Changed";
}

void pass_by_value3(vector<string> v){
  v.clear();
}

void print_vector(vector<string> v){
  for (auto s: v){
    cout << s << " ";
  }
  cout << endl;
}

int main(){
  int num {10};
  int another_num {20};
  
  cout << "num before calling pass_by_value: " << num << endl;
  pass_by_value(num);
  cout << "num after calling pass_by_value: " << num << endl;

  cout << "another num before calling pass_by_value: " << another_num << endl;
  pass_by_value(num);
  cout << "another num after calling pass_by_value: " << another_num << endl;
  
  
  string name{"Frank"};
  cout << "\nname before calling pass_by_value2: " << name << endl;
  pass_by_value2(name);
  cout << "name after calling pass_by_value2: " << name << endl;
  
  vector<string> stooges {"Larry", "Moe", "Curly"};
  cout << "\nstooges before calling pass_by_value3: " << endl;
  print_vector(stooges);
  pass_by_value3(stooges);
  cout << "\nstooges after calling pass_by_value3: " << endl;
  print_vector(stooges);
  return 0;
}
