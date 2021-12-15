#include <iostream>
#include <map>
#include <set>

void EnsureNextSymbolAndSkip(stringstream& stream){
  if (stream.peek() != '-'){
    stringstream ss;
    ss << "expected '-', but has: " << char(stream.peek());
    throw runtime_error(ss.str());
  }
  stream.ignore(1);
}

class Date {
public:
  int GetYear() const;
  int GetMonth() const;
  int GetDay() const;
};

bool operator<(const Date& lhs, const Date& rhs);

class Database {
public:
  void AddEvent(const Date& date, const string& event);
  bool DeleteEvent(const Date& date, const string& event);
  int  DeleteDate(const Date& date);

  /* ??? */ Find(const Date& date) const;
  
  void Print() const;
};

int main() {
  Database db;
    
  string command;
  while (getline(cin, command)) {
    // Считайте команды с потока ввода и обработайте каждую
  }

