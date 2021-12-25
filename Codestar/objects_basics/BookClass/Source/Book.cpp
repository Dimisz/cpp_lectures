#include "Book.h"

#include <string>
#include <iostream>


Book::Book(string author, string title, string genre, int num_pages){
  this->author = author;
  this->title = title;
  this->genre = genre;
  this->num_pages = num_pages;
};

string Book::GetAuthor() const
{
  return author;
}
string Book::GetTitle() const
{
  return title;
}
string Book::GetGenre() const
{
  return genre;
}
int Book::GetNumPages() const
{
  return num_pages;
}

void Book::Describe() const 
{
  cout << "The book's title is: " << GetTitle() << endl;
  cout << "The book's author is: " << GetAuthor() << endl;
  cout << "The book's genre is: " << GetGenre() << endl;
  cout << "The book has: " << GetNumPages() << " pages." << endl;

}
