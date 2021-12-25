#include "Pizza.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
  cout << "Creating first pizza: " << endl;
  Pizza p1("Cheese pizza", 15, 12);
  cout << "Getting name: " << p1.GetName() << endl;
  cout << "Getting cost: " << p1.GetCost() << endl;
  cout << "Getting diameter: " << p1.GetDiameter() << endl;
  cout << "Printing out toppings: " << endl;
  p1.PrintToppings();
  p1.DescribeOrder();
  cout << "Adding toppings..." << endl;
  p1.AddTopping("Salammi");
  p1.AddTopping("Mushrooms");
  cout << "Printing out toppings: " << endl;
  p1.PrintToppings();
  p1.DescribeOrder();
  
  
  
  
  
  return 0;
}
