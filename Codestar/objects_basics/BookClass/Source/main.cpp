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
  
  cout << "Creating the second book(default)..." << endl;
  Book book2("Philip K Dick", "Do you androids dream of electric sheep?", "SciFi", 300);
  cout << "Author is: " << book2.GetAuthor() << endl;
  cout << "Title is: " << book2.GetTitle() << endl;
  cout << "Genre is: " << book2.GetGenre() << endl;
  cout << "The book has: " << book2.GetNumPages() << " pages." << endl;
  
  
  
  
  return 0;
}
