#include <iostream>

using namespace std;

int main(){
  
  for (int i = 0; i < 51; i++){
    cout << i << ": ";
    if (i % 2 == 0)
      cout << "Even" << endl;
    else
      cout << "Odd" << endl;
  }
  return 0;
}
