/*
 Carpet Cleaning Service
 Charges 30$ per room
 Sales tax rate is 6%
 
 Prompt the user for the number of rooms they would like cleaned and provide an estimate:
 
 Estimate for carpet cleaning service:
 Number of rooms: 2
 Price per room: 30$
 Cost: 60$
 Tax: 3.6$
 Total: 63.6$
 */

#include <iostream>
using namespace std;

int main(){
  
  const int cost_per_room = 30;
  const double tax_rate = 0.06;
  int rooms, cost;
  double tax, total;


  cout << "How many rooms would you like to clean?" << endl;
  cin >> rooms;
  cost = rooms * cost_per_room;
  tax = cost * tax_rate;
  total = cost + tax;
  cout << "Estimate for carpet cleaning service:" << endl;
  cout << "Number of rooms: " << rooms << endl;
  cout << "Price per room: " << cost_per_room << "$" << endl;
  cout << "Cost: " << cost << "$" << endl;
  cout << "Tax: " << tax << "$" << endl;
  cout << "Total: " << total << "$" << endl;
  
  return 0;
}



