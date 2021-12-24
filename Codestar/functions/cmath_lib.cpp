#include <iostream>
#include <cmath>

using namespace std;


int main()
{
  
  int pow_result = pow(2, 3);
  int sqrt_result = sqrt(25);
  int ceil_result = ceil(4.2);
  int floor_result = floor(4.2);
  int log2_result = log2(512);
  
  cout << "2 to the power of 3: " << pow_result << endl;
  cout << "Square root of 25 is: " << sqrt_result << endl;
  cout << "4.2 ceiled: " << ceil_result << endl;
  cout << "4.2 floored: " << floor_result << endl;
  cout << "To get 512 you need to take 2 to the power of: "
  << log2_result << endl;
  
  return 0;
}
