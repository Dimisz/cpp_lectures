#include "Circle.h"

const double PI = 3.14159;

Circle::Circle()
{
  radius = 1;
}
Circle::Circle(double radius)
{
  this->radius = radius;
}
double Circle::GetRadius() const
{
  return radius;
}
void Circle::SetRadius(double radius)
{
  this->radius = radius;
}
double Circle::Circumference() const
{
  return (2 * PI * radius);
}
double Circle::Area() const
{
  return (PI * radius * radius);
}
