#include <iostream>
#include <numeric>
//#include <algorithm>
#include <sstream>
//#include <iomanip>
#include <set>
#include <map>
#include <vector>

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
    if (d == 0){
      throw invalid_argument("Invalid argument");
    }
    else if (n == 0){
      numerator = 0;
      denominator = 1;
    }
    else if ((n < 0) && (d >= 0)){
      numerator = n / gcd(n, d);
      denominator = d / gcd(n, d);
    }
    else if((n >= 0) && (d < 0)){
      numerator = -n / gcd(n, d);
      denominator = -d / gcd(n, d);
    }
    else if ((n < 0) && (d < 0)){
      numerator = -n / gcd(n, d);
      denominator = -d / gcd(n, d);
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

//TRY TO OVERLOAD < OPERATOR
bool operator<(const Rational& lhs, const Rational& rhs){
  double lh_val = 1.0 * lhs.Numerator() / lhs.Denominator();
  double rh_val = 1.0 * rhs.Numerator() / rhs.Denominator();
  if (lh_val < rh_val){
    return true;
  } else {
    return false;
  }
}
//

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
  if(rhs.Numerator() == 0){
    throw domain_error("Division by zero");
  } else {
  int num = (lhs.Numerator() * rhs.Denominator());
  int den = (lhs.Denominator() * rhs.Numerator());
  return Rational(num, den);
  }
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


//=======================
//=======================
//========TEST 1 ========
//int main() {
//    {
//        const Rational r(3, 10);
//        if (r.Numerator() != 3 || r.Denominator() != 10) {
//            cout << "Rational(3, 10) != 3/10" << endl;
//            return 1;
//        }
//    }
//
//    {
//        const Rational r(8, 12);
//        if (r.Numerator() != 2 || r.Denominator() != 3) {
//            cout << "Rational(8, 12) != 2/3" << endl;
//            return 2;
//        }
//    }
//
//    {
//        const Rational r(-4, 6);
//        if (r.Numerator() != -2 || r.Denominator() != 3) {
//            cout << "Rational(-4, 6) != -2/3" << endl;
//            return 3;
//        }
//    }
//
//    {
//        const Rational r(4, -6);
//        if (r.Numerator() != -2 || r.Denominator() != 3) {
//            cout << "Rational(4, -6) != -2/3" << endl;
//            return 3;
//        }
//    }
//
//    {
//        const Rational r(0, 15);
//        if (r.Numerator() != 0 || r.Denominator() != 1) {
//            cout << "Rational(0, 15) != 0/1" << endl;
//            return 4;
//        }
//    }
//
//    {
//        const Rational defaultConstructed;
//        if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1) {
//            cout << "Rational() != 0/1" << endl;
//            return 5;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}


//=======================
//=======================
//========TEST 2 ========
//int main() {
//    {
//        Rational r1(4, 6);
//        Rational r2(2, 3);
//        bool equal = r1 == r2;
//        if (!equal) {
//            cout << "4/6 != 2/3" << endl;
//            return 1;
//        }
//    }
//
//    {
//        Rational a(2, 3);
//        Rational b(4, 3);
//        Rational c = a + b;
//        bool equal = c == Rational(2, 1);
//        if (!equal) {
//            cout << "2/3 + 4/3 != 2" << endl;
//            return 2;
//        }
//    }
//
//    {
//        Rational a(5, 7);
//        Rational b(2, 9);
//        Rational c = a - b;
//        bool equal = c == Rational(31, 63);
//        if (!equal) {
//            cout << "5/7 - 2/9 != 31/63" << endl;
//            return 3;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}

//=======================
//=======================
//========TEST 3 ========
//int main() {
//    {
//        Rational a(2, 3);
//        Rational b(4, 3);
//        Rational c = a * b;
//        bool equal = c == Rational(8, 9);
//        if (!equal) {
//            cout << "2/3 * 4/3 != 8/9" << endl;
//            return 1;
//        }
//    }
//
//    {
//        Rational a(5, 4);
//        Rational b(15, 8);
//        Rational c = a / b;
//        bool equal = c == Rational(2, 3);
//        if (!equal) {
//            cout << "5/4 / 15/8 != 2/3" << endl;
//            return 2;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}



//=======================
//=======================
//========TEST 4 ========
//int main() {
//    {
//        ostringstream output;
//        output << Rational(-6, 8);
//        if (output.str() != "-3/4") {
//            cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
//            return 1;
//        }
//    }
//
//    {
//        istringstream input("5/7");
//        Rational r;
//        input >> r;
//        bool equal = r == Rational(5, 7);
//        if (!equal) {
//            cout << "5/7 is incorrectly read as " << r << endl;
//            return 2;
//        }
//    }
//
//    {
//        istringstream input("");
//        Rational r;
//        bool correct = !(input >> r);
//        if (!correct) {
//            cout << "Read from empty stream works incorrectly" << endl;
//            return 3;
//        }
//    }
//
//    {
//        istringstream input("5/7 10/8");
//        Rational r1, r2;
//        input >> r1 >> r2;
//        bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//        if (!correct) {
//            cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
//            return 4;
//        }
//
//        input >> r1;
//        input >> r2;
//        correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//        if (!correct) {
//            cout << "Read from empty stream shouldn't change arguments: " << r1 << " " << r2 << endl;
//            return 5;
//        }
//    }
//
//    {
//        istringstream input1("1*2"), input2("1/"), input3("/4");
//        Rational r1, r2, r3;
//        input1 >> r1;
//        input2 >> r2;
//        input3 >> r3;
//        bool correct = r1 == Rational() && r2 == Rational() && r3 == Rational();
//        if (!correct) {
//            cout << "Reading of incorrectly formatted rationals shouldn't change arguments: "
//                 << r1 << " " << r2 << " " << r3 << endl;
//
//            return 6;
//        }
//    }
//
//    cout << "OK" << endl;
//
//  set<Rational> rationals;
//  rationals.insert(Rational(1, 2));
//  rationals.insert(Rational(1, 3));
//
//  map<Rational, string> name;
//  name[Rational(1, 2)] = "одна вторая";
//    return 0;
//}


//=======================
//=======================
//========TEST 5 ========
//int main() {
//    {
//        const set<Rational> rs = {{1, 2}, {1, 25}, {3, 4}, {3, 4}, {1, 2}};
//        if (rs.size() != 3) {
//            cout << "Wrong amount of items in the set" << endl;
//            return 1;
//        }
//
//        vector<Rational> v;
//        for (auto x : rs) {
//            v.push_back(x);
//        }
//        if (v != vector<Rational>{{1, 25}, {1, 2}, {3, 4}}) {
//            cout << "Rationals comparison works incorrectly" << endl;
//            return 2;
//        }
//    }
//
//    {
//        map<Rational, int> count;
//        ++count[{1, 2}];
//        ++count[{1, 2}];
//
//        ++count[{2, 3}];
//
//        if (count.size() != 2) {
//            cout << "Wrong amount of items in the map" << endl;
//            return 3;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}


//TEST 6

//int main() {
//    try {
//        Rational r(1, 0);
//        cout << "Doesn't throw in case of zero denominator" << endl;
//        return 1;
//    } catch (invalid_argument&) {
//    }
//
//    try {
//        auto x = Rational(1, 2) / Rational(0, 1);
//        cout << "Doesn't throw in case of division by zero" << endl;
//        return 2;
//    } catch (domain_error&) {
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}

//IMPLEMENTING CALCULATOR

int main(){
  
  int n1, d1, n2, d2;
  char sep1, operation, sep2;
  cin >> n1 >> sep1 >> d1 >> operation >> n2 >> sep2 >> d2;
  
//
//  cout << "n1: " << n1 << " d1: " << d1
//       << " operation: " << operation
//  << "n2: " << n2 << " d2: " << d2 << endl;
  
  if (operation == '/'){
    try{
      Rational r;
      r = Rational (n1, d1) / Rational(n2, d2);
      cout << r.Numerator() << "/" << r.Denominator() << endl;
    } catch (exception& e){
      cout << e.what() << endl;
    }
  }
  else if (operation == '+'){
    try{
      Rational r;
      r = Rational (n1, d1) + Rational(n2, d2);
      cout << r.Numerator() << "/" << r.Denominator() << endl;
    } catch (exception& e){
      cout << e.what() << endl;
    }
  }
  else if (operation == '-'){
    try{
      Rational r;
      r = Rational (n1, d1) - Rational(n2, d2);
      cout << r.Numerator() << "/" << r.Denominator() << endl;
    } catch (exception& e){
      cout << e.what() << endl;
    }
  }
  else if (operation == '*'){
    try{
      Rational r;
      r = Rational (n1, d1) * Rational(n2, d2);
      cout << r.Numerator() << "/" << r.Denominator() << endl;
    } catch (exception& e){
      cout << e.what() << endl;
    }
  }
  return 0;
}
