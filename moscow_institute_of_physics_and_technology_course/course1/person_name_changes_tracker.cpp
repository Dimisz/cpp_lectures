#include <iostream>
#include <vector>
#include <map>


using namespace std;



class Person {

public:

  void ChangeFirstName(int year, const string& first_name) {

    // добавить факт изменения имени на first_name в год year

    firstName[year] = first_name;

  }

  void ChangeLastName(int year, const string& last_name) {

    lastName[year] = last_name;

    // добавить факт изменения фамилии на last_name в год year

  }

  string GetFullName(int year) {
    bool foundName = false;
    bool foundSurn = false;
    string name, surname;
    int limit = firstName.begin() -> first;

    for(int i = year; i >= limit; --i)
    {
      if(firstName.count(i))
      {
        name = firstName[i];
        foundName = true;
        break;
      }
    }

    limit = lastName.begin() -> first;
    for(int i = year; i >= limit; --i)
    {
      if(lastName.count(i))
      {
        surname = lastName[i];
        foundSurn = true;
        break;
      }
    }

    if(foundName && foundSurn){
      return name + " " + surname;
    }
    else if(foundName){
      return name + " with unknown last name";
    }
    else if(foundSurn){
      return surname + " with unknown first name";
    }
    else{
      return "Incognito";
    }

    // получить имя и фамилию по состоянию на конец года year

  }

private:
  map<int, string> firstName;
  map<int, string> lastName;
};



int main()

{

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




//Person person;
//
//    cout << person.GetFullName(2000) << endl;
//    person.ChangeLastName(1968, "1968_2nd");
//    person.ChangeLastName(1967, "1967_2nd");
//    person.ChangeLastName(1965, "1965_2nd");
//    person.ChangeLastName(1966, "1966_2nd");
//
//    for (int year : {1900, 1920, 1950, 1965, 1966, 1967, 1968}) {
//        cout << person.GetFullName(year) << endl;
//    }
//
//    person.ChangeFirstName(1920, "1920_1st");
//    person.ChangeFirstName(1900, "1900_1st");
//    person.ChangeFirstName(1965, "1965_1st");
//    person.ChangeFirstName(1950, "1950_1st");
//
//    for (int year : {1900, 1920, 1950, 1965, 1966, 1967, 1968}) {
//        cout << person.GetFullName(year) << endl;
//    }
//    return 0;
//}
