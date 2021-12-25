#include "Circle.h"

#include <iostream>
using namespace std;
void CheckCircle(Circle& c);

int main()
{
  cout << "Default constructor" << endl;
  Circle circle1;
  CheckCircle(circle1);
  cout << "Parametrized constructor " << endl;
  Circle circle2(10);
  CheckCircle(circle2);
  
  return 0;
}

void CheckCircle(Circle& c)
{
  cout << "========================" << endl;
  cout << "Getting radius: " << c.GetRadius() << endl;
  cout << "Getting area: " << c.Area() << endl;
  cout << "Getting circumference: " << c.Circumference() << endl;
  cout << "Setting radius..." << endl;
  c.SetRadius(2);
  cout << "Getting radius: " << c.GetRadius() << endl;
  cout << "Setting radius..." << endl;
  c.SetRadius(5);
  cout << "Getting radius: " << c.GetRadius() << endl;
  cout << "Getting area: " << c.Area() << endl;
  cout << "Getting circumference: " << c.Circumference() << endl;
  cout << "==========================" << endl;


}
