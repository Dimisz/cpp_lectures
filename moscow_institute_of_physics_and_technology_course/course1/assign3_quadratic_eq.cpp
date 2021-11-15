// Verbose output commented out as per assignment reqs
#include <iostream>
#include <cmath>
using namespace std;

// Prints roots of quadratic equation ax*2 + bx + x
void findRoots(double a, double b, double c)
{
  // If a is 0, then equation is not quadratic, but
  // linear
  if (a == 0) {
    if (b == 0){
      cout << "" << endl;
      return;
    }
    else{
      cout << -c/b << endl;
      return;
    }
  }

  double d = b * b - 4 * a * c;
  double sqrt_val = sqrt(abs(d));

  if (d > 0) {
//    cout << "Roots are real and different \n";
    cout << (-b + sqrt_val) / (2 * a) << " " << (-b - sqrt_val) / (2 * a);
  }
  else if (d == 0) {
//    cout << "Roots are real and same \n";
    cout << -b / (2 * a) << endl;
  }
  else // d < 0
  {
    cout << "" << endl;
//    cout << "Roots are complex \n";
//    cout << -(double)b / (2 * a) << " + i" << sqrt_val
//      << "\n"
//      << -(double)b / (2 * a) << " - i" << sqrt_val;
  }
}

int main()
{
  double a, b, c;
  cin >> a >> b >> c;

  findRoots(a, b, c);
  return 0;
}

