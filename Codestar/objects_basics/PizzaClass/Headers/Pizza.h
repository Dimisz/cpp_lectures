#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
using namespace std;

class Pizza
{
public:
  Pizza(string name, int cost, int diameter);
  void AddTopping(string topping);
  int GetCost() const;
  void PrintToppings() const;
  int GetDiameter() const;
  string GetName() const;
  void DescribeOrder() const;

private:
  string name;
  int cost;
  int diameter;
  vector<string> toppings;
  
};
#endif
