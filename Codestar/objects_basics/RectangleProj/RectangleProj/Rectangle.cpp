//
//  Rectangle.cpp
//  RectangleProj
//
//  Created by mb pro on 25.12.2021.
//

#include "Rectangle.h"

Rectangle::Rectangle()
{
  this->length = 1.0;
  this->width = 1.0;
}

Rectangle::Rectangle(double new_length, double new_width)
{
  length = new_length;
  width = new_width;
}

double Rectangle::GetLength() const
{
  return length;
}

double Rectangle::GetWidth() const
{
  return width;
}

double Rectangle::GetArea() const
{
  return length * width;
}

double Rectangle::GetPerimeter() const
{
  return 2 * (length + width);
}

void Rectangle::SetLength(double new_length)
{
  length = new_length;
}

void Rectangle::SetWidth(double new_width)
{
  width = new_width;
}
