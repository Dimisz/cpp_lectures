//
//  Rectangle.h
//  RectangleProj
//
//  Created by mb pro on 25.12.2021.
//

#ifndef Rectangle_h
#define Rectangle_h
class Rectangle
{
public:
  Rectangle();
  Rectangle(double length, double width);
  double GetLength() const;
  double GetWidth() const;
  double GetArea() const;
  double GetPerimeter() const;
  void SetLength(double new_length);
  void SetWidth(double new_width);
  
private:
  double length;
  double width;
  
};

#endif /* Rectangle_h */
