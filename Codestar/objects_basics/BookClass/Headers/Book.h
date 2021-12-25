#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
public:
  Book(string author, string title, string genre, int num_pages);
  
  string GetAuthor() const;
  
  string GetTitle() const;
  
  string GetGenre() const;
  
  int GetNumPages() const;
  
  void Describe() const;
  
  
private:
  string author;
  string title;
  string genre;
  int num_pages;
  
};

#endif
