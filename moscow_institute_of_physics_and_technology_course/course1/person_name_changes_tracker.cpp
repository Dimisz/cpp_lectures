#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

struct Name{
  string first_name = "unknown";
  string last_name = "unknown";
};

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
    // добавить факт изменения имени на first_name в год year
    person_info[year].first_name = first_name;
  }
  void ChangeLastName(int year, const string& last_name) {
    // добавить факт изменения фамилии на last_name в год year
    person_info[year].last_name = last_name;
  }
  string GetFullName(int year) {
    // получить имя и фамилию по состоянию на конец года year
    string result = "Incognito";
    if (person_info.count(year) != 0){
      result = person_info[year].first_name + " " + person_info[year].last_name;
    }
    return result;
  }
private:
  set<map<int, Name>> person_info;
};


int main(){
  Person person;
   
   person.ChangeFirstName(1965, "Polina");
   person.ChangeLastName(1967, "Sergeeva");
   
  for (int year : {1900, 1965, 1990}) {
     cout << person.GetFullName(year) << endl;
   }
   
   person.ChangeFirstName(1970, "Appolinaria");
   
  for (int year : {1969, 1970}) {
     cout << person.GetFullName(year) << endl;
   }
   
   person.ChangeLastName(1968, "Volkova");
   for (int year : {1969, 1970}) {
     cout << person.GetFullName(year) << endl;
   }
  
  
  
  return 0;
}
