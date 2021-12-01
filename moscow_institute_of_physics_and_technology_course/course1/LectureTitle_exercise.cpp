#include <iostream>

using namespace std;


struct Specialization{
  string value;
  explicit Specialization(const string& new_value){
    value = new_value;
  }
};

struct Course{
  string value;
  explicit Course(const string& new_value){
    value = new_value;
  }
};

struct Week{
  string value;
  explicit Week(const string& new_value){
    value = new_value;
  }
};

struct LectureTitle {
  string specialization;
  string course;
  string week;
  
  //constructor
  LectureTitle(const Specialization& new_specialization, const Course& new_course, const Week& new_week){
    specialization = new_specialization.value;
    course = new_course.value;
    week = new_week.value;
  }
};

//int main(){
//  SHOULD PASS
//  LectureTitle title(
//      Specialization("C++"),
//      Course("White belt"),
//      Week("4th")
//  );
  
//  SHOULD FAIL
//  LectureTitle title("C++", "White belt", "4th");
  
//  SHOULD FAIL
//  LectureTitle title(string("C++"), string("White belt"), string("4th"));
  
//  SHOULD FAIL
//  LectureTitle title = {"C++", "White belt", "4th"};
  
//  SHOULD FAIL
//  LectureTitle title = {{"C++"}, {"White belt"}, {"4th"}};
  
  
//  SHOULD FAIL
//  LectureTitle title(
//      Course("White belt"),
//      Specialization("C++"),
//      Week("4th")
//  );
  
//  SHOULD FAIL
//  LectureTitle title(
//      Specialization("C++"),
//      Week("4th"),
//      Course("White belt")
//  );
//  return 0;
//}
