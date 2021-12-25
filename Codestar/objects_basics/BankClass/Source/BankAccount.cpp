#include "BankAccount.h"

#include <string>
#include <iostream>
using namespace std;

BankAccount::BankAccount(string owner)
{
  this->owner = owner;
  balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
  this->owner = owner;
  if (balance > 0)
  {
    
    this->balance = balance;
  }
  else
  {
    this->balance = 0;
    cout << "Balance should be greater than 0" << endl;
    cout << "Created default with 0 balance." << endl;
  }
}

void BankAccount::Deposit(int amount)
{
  if (amount > 0)
  {
    balance += amount;
  }
  else
  {
    cout << "The deposit amount should be greater than 0" << endl;
  }
}

void BankAccount::Withdraw(int amount)
{
  if (amount > 0)
  {
    if (balance - amount >= 0)
    {
      balance -= amount;
    }
    else
    {
      cout << "Your funds are insufficient to withdraw the amount" << endl;
    }
  }
  else
  {
    cout << "The withdrawal amount should be greater than 0" << endl;
  }
}

string BankAccount::GetOwner() const
{
  return owner;
}
int BankAccount::GetBalance() const
{
  return balance;
}
 
