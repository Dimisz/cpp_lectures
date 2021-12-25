#include "Pizza.h"

#include <string>
#include <vector>
#include <iostream>

using namespace std;


Pizza::Pizza(string name, int cost, int diameter)
{
  this->name = name;
  this->cost = cost;
  this->diameter = diameter;
  toppings.push_back("Cheese");
}

void Pizza::AddTopping(string topping)
{
  toppings.push_back(topping);
}
int Pizza::GetCost() const
{
  return cost;
}

void Pizza::PrintToppings() const
{
  for (string topping : toppings)
  {
    cout << topping << endl;
  }
}

int Pizza::GetDiameter() const
{
  return diameter;
}

string Pizza::GetName() const
{
  return name;
}
void Pizza::DescribeOrder() const
{
  cout << "Name: " << GetName() << endl;
  cout << "The pizza comes with the following toppings:" << endl;
  PrintToppings();
  cout << "Diameter: " << GetDiameter() << endl;
  cout << "Cost: $" << GetCost() << endl;
  
}
  
