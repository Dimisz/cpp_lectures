//
//  main.cpp
//  RectangleProj
//
//  Created by mb pro on 25.12.2021.
//

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
  // insert code here...
  Rectangle r1;
  Rectangle r2(5.0, 2.0);
  
  cout << "r1 area: " << r1.GetArea() << endl;
  cout << "r1 perimeter: " << r1.GetPerimeter() << endl;
  cout << "r2 area: " << r2.GetArea() << endl;
  cout << "r2 perimeter: " << r2.GetPerimeter() << endl;
  
  r1.SetLength(22);
  r1.SetWidth(12);
  
  cout << "r1 length is now: " << r1.GetLength() << endl;
  cout << "r1 width is now: " << r1.GetWidth() << endl;
  cout << "r1 area is now: " << r1.GetArea() << endl;
  cout << "r1 perimeter is now: " << r1.GetPerimeter() << endl;
  
  
  
  return 0;
}
