#include <iostream>
#include <numeric>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <set>
#include <map>

using namespace std;

class Rational {
private:
  int numerator;
  int denominator;
  //int gcd;
public:
  
  Rational(){
    numerator = 0;
    denominator = 1;
    //gcd = 1;
  };
  
  Rational(int n, int d){
    if (n == 0){
      numerator = 0;
      denominator = 1;
    }
    else if ((n < 0) && (d >= 0)){
      numerator = n / gcd(-n, d);
      denominator = d / gcd(-n, d);
    }
    else if((n >= 0) && (d < 0)){
      numerator = -n / gcd(n, -d);
      denominator = d / gcd(n, -d);
    }
    else if ((n < 0) && (d < 0)){
      numerator = -n / gcd(-n, -d);
      denominator = -d / gcd(-n, -d);
    }
    else {
      numerator = n / gcd(n, d);
      denominator = d / gcd(n, d);
    }
   // gcd = gcd(numerator, denominator);
//    cout << "n " << numerator << endl;
//    cout << "d " << denominator << endl;
    //cout << "gcd " << gcd(numerator, denominator) << endl;
    
  };
  
  int Numerator() const{
    return numerator;
  };
  int Denominator() const{
    return denominator;
  };

};

bool operator==(const Rational& lhs, const Rational& rhs){
  if ((lhs.Numerator() == rhs.Numerator()) && (lhs.Denominator() == rhs.Denominator())){
    return true;
  } else {
    return false;
  }
}

Rational operator+(const Rational& lhs, const Rational& rhs){
  int num = ((lhs.Numerator() * rhs.Denominator())+(lhs.Denominator() * rhs.Numerator()));
  int den = (lhs.Denominator() * rhs.Denominator());
  return Rational(num, den);
}

Rational operator-(const Rational& lhs, const Rational& rhs){
  int num = ((lhs.Numerator() * rhs.Denominator())-(lhs.Denominator() * rhs.Numerator()));
  int den = (lhs.Denominator() * rhs.Denominator());
  return Rational(num, den);
}

Rational operator*(const Rational& lhs, const Rational& rhs){
  int num = (lhs.Numerator() * rhs.Numerator());
  int den = (lhs.Denominator() * rhs.Denominator());
  return Rational(num, den);
}

Rational operator/(const Rational& lhs, const Rational& rhs){
  int num = (lhs.Numerator() * rhs.Denominator());
  int den = (lhs.Denominator() * rhs.Numerator());
  return Rational(num, den);
}



ostream& operator<<(ostream& stream, const Rational& r){
  stream << r.Numerator() << "/" << r.Denominator();
  return stream;
}

istream& operator>>(istream& stream, Rational& r){
  int num, den;
  char separator;
  
  if (stream >> num){
    if (stream >> separator){
      if (separator == '/'){
        if (stream >> den){
          r = Rational(num, den);
        }
      }
    }
  }
  
  return stream;
}



//int main(){
//  Rational r;
//  cout << r.Numerator() << '/' << r.Denominator();
//  cout << endl;
//  Rational r1(4, 6);
//  cout << r1.Numerator() << '/' << r1.Denominator();
//  cout << endl;
  //cout << gcd(5, 6) << endl;
//  cout << "OK" << endl;
//  cout << "====================" << endl;
//  const Rational r = Rational(1, 2) + Rational(1, 3) - Rational(1, 4);
//  if (r == Rational(7, 12)) {
//    cout << "equal";
//  }
  
//  const Rational r = Rational(1, 2) * Rational(1, 3) / Rational(1, 4);
//  if (r == Rational(2, 3)) {
//    cout << "equal";
//  }
//  Rational r;
//  cin >> r;
//  cout << r;
//  set<Rational> rationals;
//  rationals.insert(Rational(1, 2));
//  rationals.insert(Rational(1, 3));
//
//  map<Rational, string> name;
//  name[Rational(1, 2)] = "одна вторая";
//  cout << Rational(1, 2);
//  cout << Rational(1, 3);
//  
//  return 0;
//}

int main() {
    {
        ostringstream output;
        output << Rational(-6, 8);
        if (output.str() != "-3/4") {
            cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
            return 1;
        }
    }

    {
        istringstream input("5/7");
        Rational r;
        input >> r;
        bool equal = r == Rational(5, 7);
        if (!equal) {
            cout << "5/7 is incorrectly read as " << r << endl;
            return 2;
        }
    }

    {
        istringstream input("");
        Rational r;
        bool correct = !(input >> r);
        if (!correct) {
            cout << "Read from empty stream works incorrectly" << endl;
            return 3;
        }
    }

    {
        istringstream input("5/7 10/8");
        Rational r1, r2;
        input >> r1 >> r2;
        bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
        if (!correct) {
            cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
            return 4;
        }

        input >> r1;
        input >> r2;
        correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
        if (!correct) {
            cout << "Read from empty stream shouldn't change arguments: " << r1 << " " << r2 << endl;
            return 5;
        }
    }

    {
        istringstream input1("1*2"), input2("1/"), input3("/4");
        Rational r1, r2, r3;
        input1 >> r1;
        input2 >> r2;
        input3 >> r3;
        bool correct = r1 == Rational() && r2 == Rational() && r3 == Rational();
        if (!correct) {
            cout << "Reading of incorrectly formatted rationals shouldn't change arguments: "
                 << r1 << " " << r2 << " " << r3 << endl;

            return 6;
        }
    }

    cout << "OK" << endl;
    return 0;
}
