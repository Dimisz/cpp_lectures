/*
 Carpet Cleaning Service
 Charges:
 25$ per small room
 35$ per large room
 Sales tax rate is 6%
 
 Prompt the user for the number of rooms they would like cleaned and provide an estimate:
 
 Estimate for carpet cleaning service:
 Number of large rooms: 3
 Numer of small rooms: 1
 Price per large room: 35$
 Price per small room: 25$
 Cost: 110$
 Tax: 6.6$
 =========================
 Total: 116.6$
 */

#include <iostream>
using namespace std;

int main(){
  
  const double l_room_price {35};
  const double s_room_price {25};
  const double tax_rate {0.06};
  
  


  int l_rooms;
  cout << "How many large rooms would you like to clean?" << endl;
  cin >> l_rooms;
  
  int s_rooms;
  cout << "How many small rooms would you like to clean?" << endl;
  cin >> s_rooms;
  
  double cost, total, tax_due;
  cost = (l_rooms * l_room_price) + (s_rooms * s_room_price);
  tax_due = cost * tax_rate;
  total = cost + tax_due;
  
  cout << "Estimate for carpet cleaning service:" << endl;
  
  cout << "Number of large rooms: " << l_rooms << endl;
  cout << "Number of small rooms: " << s_rooms << endl;
  
  cout << "Price per large room: " << l_room_price << "$" << endl;
  cout << "Price per small room: " << s_room_price << "$" << endl;
  
  cout << "Cost: " << cost << "$" << endl;
  cout << "Tax: " << tax_due << "$" << endl;
  cout << "=========================" << endl;
  cout << "Total: " << total << "$" << endl;
  
  return 0;
}

