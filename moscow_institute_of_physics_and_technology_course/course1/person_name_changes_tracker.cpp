#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

struct Name{
  bool first_set = false;
  bool last_set = false;
  string first_name = "unknown";
  string last_name = "unknown";
};

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
    // добавить факт изменения имени на first_name в год year
    Name new_name;
    new_name.first_set = true;
    for (auto& item : person_info){
      if(year >= item.first){
        new_name.last_name = item.second.last_name;
      }
//      else if (year <= item.first){
//        if (item.second.first_set == true){
//          break;
//        }
//        item.second.first_name = first_name;
//      }
    }
    new_name.first_name = first_name;
    person_info[year] = new_name;
  }
  
  void ChangeLastName(int year, const string& last_name) {
    // добавить факт изменения фамилии на last_name в год year
    Name new_name;
    new_name.last_name = true;
    for (auto& item : person_info){
      if(year >= item.first){
        new_name.first_name = item.second.first_name;
      }
//      else if (year <= item.first){
//        if (item.second.last_set == true){
//          break;
//        }
//        item.second.last_name = last_name;
//      }
    }
    
    new_name.last_name = last_name;
    person_info[year] = new_name;
  }
  
  string GetFullName(int year) {
    // получить имя и фамилию по состоянию на конец года year
    string result = "Incognito";
    string first_name = "unknown";
    string last_name = "unknown";
    
    //if (person_info.count(year) != 0){
  //  cout << "terating...." << endl;
      for (const auto& item : person_info){
        if(year >= item.first){
          first_name = item.second.first_name;
          
         // cout << first_name + " ";
          last_name = item.second.last_name;
         // cout << last_name << endl;
        }
      }
//    cout << "finished iterating" << endl;
    result = first_name + " " + last_name;
//    cout << result << endl;
    
      if (first_name == "unknown" && last_name == "unknown"){
        result = "Incognito";
      }
      else if (first_name == "unknown"){
        result = last_name + " with unknown first name";
      }
      else if (last_name == "unknown"){
        result = first_name + " with unknown last name";
      }
    
      
    return result;
  }
  
//  void PrintFull(){
//    cout << "================" << endl;
//    for (const auto& item : person_info){
//      cout << item.first << ": ";
//      cout << item.second.first_name << " ";
//      cout << item.second.last_name << endl;
//    }
//  }
  
private:
  map<int, Name> person_info;
};


int main(){
//  Person person;
//
//   person.ChangeFirstName(1965, "Polina");
//   person.ChangeLastName(1967, "Sergeeva");
//
//  for (int year : {1900, 1965, 1990}) {
//     cout << person.GetFullName(year) << endl;
//   }
//
//   person.ChangeFirstName(1970, "Appolinaria");
//
//  for (int year : {1969, 1970}) {
//     cout << person.GetFullName(year) << endl;
//   }
//
//   person.ChangeLastName(1968, "Volkova");
//   for (int year : {1969, 1970}) {
//     cout << person.GetFullName(year) << endl;
//   }
//
  //person.PrintFull();
  
  Person person;

      cout << person.GetFullName(2000) << endl;
      person.ChangeLastName(1968, "1968_2nd");
      person.ChangeLastName(1967, "1967_2nd");
      person.ChangeLastName(1965, "1965_2nd");
      person.ChangeLastName(1966, "1966_2nd");

      for (int year : {1900, 1920, 1950, 1965, 1966, 1967, 1968}) {
          cout << person.GetFullName(year) << endl;
      }

      person.ChangeFirstName(1920, "1920_1st");
      person.ChangeFirstName(1900, "1900_1st");
      person.ChangeFirstName(1965, "1965_1st");
      person.ChangeFirstName(1950, "1950_1st");

      for (int year : {1900, 1920, 1950, 1965, 1966, 1967, 1968}) {
          cout << person.GetFullName(year) << endl;
      }
  
  
  
  return 0;
}
