#include <iostream>
#include <vector>
using namespace std;

struct Student{
  string first_name;
  string last_name;
  long int day_of_birth;
  long int month_of_birth;
  long int year_of_birth;
  
  void PrintName(){
    cout << first_name << " " << last_name << endl;
  }
  void PrintBirthDate(){
    cout << day_of_birth << "." << month_of_birth << "." << year_of_birth << endl;
  }
};



int main(){
  vector<Student> students;
  int num_students;
  cin >> num_students;
  
  //filling out the vector with students
  for (int i = 0; i < num_students; i++){
    
    string first_name, last_name;
    long int day_of_birth, month_of_birth, year_of_birth;
    cin >> first_name >> last_name >> day_of_birth >> month_of_birth >> year_of_birth;
    
    students.push_back({first_name, last_name, day_of_birth, month_of_birth, year_of_birth});
  }
  
  int num_requests;
  cin >> num_requests;
  for (int i = 0; i < num_requests; i++){
    string request;
    int n;
    cin >> request >> n;
    if (request == "name"){
      if ((n > 0) && (n-1 <= students.size())){
        students.at(n - 1).PrintName();
      } else {
        cout << "bad request" << endl;
      }
    } else if (request == "date"){
      if ((n > 0) && (n-1 <= students.size())){
        students.at(n - 1).PrintBirthDate();
      } else {
        cout << "bad request" << endl;
      }
    } else {
      cout << "bad request" << endl;
    }
  }
  
                       
                       
  return 0;
}


//TEACHERS IMPLEMENTATION
//
//struct Student {
//  string first_name;
//  string last_name;
//
//  int day;
//  int month;
//  int year;
//};
//
//int main() {
//  int n;
//  cin >> n;
//
//  string first_name, last_name;
//  int day, month, year;
//  vector<Student> students;
//
//  for (size_t i = 0; i < n; ++i) {
//    cin >> first_name >> last_name >> day >> month >> year;
//
//    students.push_back(Student{
//      first_name,
//      last_name,
//      day,
//      month,
//      year
//    });
//  }
//
//  int m;
//  cin >> m;
//  string query;
//  int student_number;
//
//  for (int i = 0; i < m; ++i) {
//    cin >> query >> student_number;
//    --student_number;
//
//    if (query == "name" && student_number >= 0 && student_number < n) {
//      cout << students[student_number].first_name << " "
//           << students[student_number].last_name << endl;
//    } else if (query == "date" && student_number >= 0 && student_number < n) {
//      cout << students[student_number].day << "."
//           << students[student_number].month << "."
//           << students[student_number].year << endl;
//    } else {
//      cout << "bad request" << endl;
//    }
//  }
//
//  return 0;
//}
//
//
