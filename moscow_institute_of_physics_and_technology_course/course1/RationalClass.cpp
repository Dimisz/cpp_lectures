#include <iostream>
#include <numeric>

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
    if ((n < 0) && (d >= 0)){
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
    else if (n == 0){
      numerator = 0;
      denominator = 1;
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



int main(){
//  Rational r;
//  cout << r.Numerator() << '/' << r.Denominator();
//  cout << endl;
//  Rational r1(4, 6);
//  cout << r1.Numerator() << '/' << r1.Denominator();
//  cout << endl;
  //cout << gcd(5, 6) << endl;
  cout << "OK" << endl;
  cout << "====================" << endl;
  const Rational r = Rational(1, 2) + Rational(1, 3) - Rational(1, 4);
  if (r == Rational(7, 12)) {
    cout << "equal";
  }
  
  return 0;
}
