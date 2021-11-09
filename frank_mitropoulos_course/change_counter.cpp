#include <iostream>
using namespace std;

void change_counter(){
  int cents, dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
  
  cout << "Enter an amount in cents: " << endl;
  cin >> cents;
  if (cents >= 100){
    dollars = cents / 100;
    cents -= dollars * 100;
  }
  if (cents >= 25){
    quarters = cents / 25;
    cents -= quarters * 25;
  }
  if (cents >= 10){
    dimes = cents / 10;
    cents -= dimes * 10;
  }
  if (cents >= 5){
    nickels = cents / 5;
    cents -= nickels * 5;
  }
  if (cents > 0){
    pennies = cents;
  }
  cout << "You can provide this change as follows: " << endl;
  cout << "dollars: " << dollars << endl;
  cout << "quarters: " << quarters << endl;
  cout << "dimes: " << dimes << endl;
  cout << "nickels: " << nickels << endl;
  cout << "pennies: " << pennies << endl;
}

int main(){
  
  change_counter();
  
  return 0;
}
