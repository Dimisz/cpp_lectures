#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  // find discriminant
  double d = b * b - 4 * a * c;

  // if a == 0, the equation is linear: ax + c = 0
  if (a == 0) {
    
    // bx = -c => x = -c / b
    if (b != 0) {
      cout << -C / B << endl;
    }
    // если B равно нулю, корней нет
    
  } else if (D == 0) {  // случай с нулевым дискриминантом
    
    // корень ровно один
    cout << -B / (2 * A) << endl;
    
  } else if (D > 0) {  // в случае с положительным дискриминантом корня два
  
    double r1 = (-B + sqrt(D)) / (2 * A);
    double r2 = (-B - sqrt(D)) / (2 * A);

    cout << r1 << " " << r2 << endl;
    
  }
  // если дискриминант отрицателен, действительных корней нет

  return 0;
}
