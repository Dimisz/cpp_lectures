#include <iostream>

using namespace std;

int main(){
  
  //printing even nums
  for (int i = 0; i < 10; i++)
  {
    if (i % 2 == 1)
    {
      continue;
    }
    else
    {
      cout << i << endl;
    }
  }
  return 0;
}
