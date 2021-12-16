#include <iostream>
#include <vector>

using namespace std;

void Swap(int &a, int &b);
void Print(const vector<int> &v);
void ChangeNum(int num);
void ChangeNumRef(int &num);

int main(){
  int x {10}, y {20};
  cout << x << " " << y << endl;
  Swap(x, y);
  cout << x << " " << y << endl;
  
  
  vector<int> data {1, 2, 4, 6};
  Print(data);
  
  int num = 1;
  cout << "Num before any funs: " << num << endl;
  ChangeNum(num);
  cout << "Num after func without ref: " << num << endl;
  ChangeNumRef(num);
  cout << "Num after func with ref: " << num << endl;
  return 0;
}

void Swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void Print(const vector<int> &v){
  cout << "Printing out vector: " << endl;
  for (auto num : v){
    cout << num << endl;
  }
  cout << "---------------------" << endl;
}

void ChangeNum(int num){
  cout << "Changing num without ref: " << endl;
  num = 100;
}

void ChangeNumRef(int &num){
  cout << "Changing num with ref: " << endl;
  num = 100;
}
