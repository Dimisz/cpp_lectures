#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
  Circle();
  Circle(double radius);
  double GetRadius() const;
  void SetRadius(double radius);
  double Circumference() const;
  double Area() const;
private:
  double radius;
};
#endif
