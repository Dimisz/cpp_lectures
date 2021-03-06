#include <iostream>

using namespace std;

struct Day {
  int value;
  explicit Day(int new_value){
    value = new_value;
  }
};
struct Month {
  int value;
  explicit Month(int new_value){
    value = new_value;
  }
};
struct Year {
  int value;
  explicit Year(int new_value){
    value = new_value;
  }
};
struct Date {
  int day;
  int month;
  int year;
  
  //constructor
  Date(Day new_day, Month new_month, Year new_year){
    day = new_day.value;
    month = new_month.value;
    year = new_year.value;
  }
};

void PrintDate(const Date& date){
  cout << date.day << "." << date.month << "." << date.year << endl;
}
int main(){
  Date date = {Day{10}, Month{11}, Year{12}};
  PrintDate(date);
  //Date new_date = {{12}, {10}, {13}};//forbidden by 'explicit'
  //PrintDate(new_date);
  
  Date date1 = {Day(10), Month(11), Year(12)};
  PrintDate(date1);
  return 0;
}
