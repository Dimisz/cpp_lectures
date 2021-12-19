#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  srand(time(nullptr));
  
  int val1 = rand() % 10; //val1 will be >=0 and < 10
  //shift it
  int val2 = rand() % 10 + 1; //val1 will be >= 1 and <= 10
  
  cout << val1 << endl;
  cout << val2 << endl;
  
  cout << "Imitating 10 dice rools: " << endl;
  for (int i = 0; i < 10; i++){
    cout << (rand()%6+1) << endl;
  }
  
  return 0;
}
