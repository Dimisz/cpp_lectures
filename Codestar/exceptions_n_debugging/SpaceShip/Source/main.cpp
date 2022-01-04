
#include <iostream>
#include "../Header/WarpDriveOverheatingException.h"
using namespace std;

void WarpTest(int temperature);

int main()
{
 
  cout << "Enter temperature: " << endl;
  int temp;
  while(cin >> temp)
  {
    try
    {
      WarpTest(temp);
    }
    catch(const WarpDriveOverheatingException& err)
    {
      cout << err.what() << endl;
    }
    cout << "Enter temperature: " << endl;
  }
  
  return 0;
}

void WarpTest(int temperature)
{
  cout << "\n\n=========================" << endl;
  cout << "Testing Warp Drive with " << temperature << "C ..." << endl;
  if(temperature >= 80)
  {
    throw WarpDriveOverheatingException();
  }
  else
  {
    cout << "Temperature within normal" << endl;
  }
  
}
