#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Creating the first book(default)..." << endl;
  Book book1("Ernest Hemingway", "The old man and the sea",
             "Fiction", 212);
  book1.Describe();
  
  
  
  
  return 0;
}
