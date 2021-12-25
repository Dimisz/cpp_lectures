#include "BankAccount.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Testing constructor with 1 argument..." << endl;
  cout << "====================================\n" << endl;
  cout << "First account with name only" << endl;
  BankAccount first("Peter");
  cout << "Owner: " << first.GetOwner() << endl;
  cout << "Balance: " << first.GetBalance() << endl;
  cout << "Trying to withdraw... (must get warning)" << endl;
  first.Withdraw(100);
  cout << "Balance: " << first.GetBalance() << endl;
  cout << "Depositing 200" << endl;
  first.Deposit(200);
  cout << "Balance: " << first.GetBalance() << endl;
  cout << "Withdrawing -5..." << endl;
  first.Withdraw(-5);
  cout << "Depositing -15..." << endl;
  first.Deposit(-15);
  cout << "Depositing 50..." << endl;
  first.Deposit(50);
  cout << "Balance: " << first.GetBalance() << endl;
  cout << "Withdrawing 150..." << endl;
  first.Withdraw(150);
  cout << "Balance: " << first.GetBalance() << endl;
  
  
  
  cout << "\n\nTesting constructor with 2 arguments..." << endl;
  cout << "====================================\n" << endl;
  cout << "Second account with name and balance" << endl;
  BankAccount sec("Peter", -200);
  cout << sec.GetOwner() << " " << sec.GetBalance() << endl;
  BankAccount second("Mike", 500);
  cout << "Owner: " << second.GetOwner() << endl;
  cout << "Balance: " << second.GetBalance() << endl;
  cout << "Trying to withdraw... (must get warning)" << endl;
  second.Withdraw(1000);
  cout << "Balance: " << second.GetBalance() << endl;
  cout << "Depositing 200" << endl;
  second.Deposit(200);
  cout << "Balance: " << second.GetBalance() << endl;
  cout << "Withdrawing -5..." << endl;
  second.Withdraw(-5);
  cout << "Depositing -15..." << endl;
  second.Deposit(-15);
  cout << "Depositing 50..." << endl;
  second.Deposit(50);
  cout << "Balance: " << second.GetBalance() << endl;
  cout << "Withdrawing 150..." << endl;
  second.Withdraw(150);
  cout << "Balance: " << second.GetBalance() << endl;
  return 0;
}
