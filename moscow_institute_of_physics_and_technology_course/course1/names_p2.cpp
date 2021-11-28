#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;


class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
    // change name to 'first_name' in the year of 'year'
    first_name_map[year] = first_name;
    
  }
  void ChangeLastName(int year, const string& last_name) {
    // change name to 'last_name' in the year of 'year'
    last_name_map[year] = last_name;
    
  }
  string GetFullName(int year) {
    // get first and last names in ta given year
    string first = "unk";
    string last = "unk";
    //check first name first
    for (const auto& [y, n] : first_name_map){
      if (year >= y){
        first = n;
      }
    }
    
    for (const auto& [y, n] : last_name_map){
      if (year >= y){
        last = n;
      }
    }
    
    string result;
    if (first == "unk" && last == "unk"){
      result = "Incognito";
    }
    else if (first == "unk"){
      result = last + " with unknown first name";
    }
    else if (last == "unk"){
      result = first + " with unknown last name";
    }
    else {
      result = first + " " + last;
    }
    return result;
  }
  
  string GetFullNameWithHistory(int year) {
    // get first and last names in ta given year
    string first_n = "unk";
    vector<string> first_vec;
    string last_n = "unk";
    vector<string> last_vec;
    
    //check first name first
    for (const auto& [y, n] : first_name_map){
      if (year >= y){
        
        first_n = n;
        if (first_vec.size() == 0){
          first_vec.push_back(first_n);
       }
        else if (first_n != first_vec.back()){
          first_vec.push_back(first_n);
        }
      }
    }
    
    
    for (const auto& [y, n] : last_name_map){
      if (year >= y){
        last_n = n;
        if (last_vec.size() == 0){
          last_vec.push_back(last_n);
       }
        else if (last_n != last_vec.back()){
          last_vec.push_back(last_n);
        }
      }
    }
    
    
    string firsts_as_str = "";
    //vector<string> firsts_checker;
    if (first_vec.size() > 1){
      
      firsts_as_str = " (";
      for (int i = first_vec.size() - 2; i >= 0; --i){
        if (i == 0){
          firsts_as_str += first_vec.at(i);
        }
        else{
          firsts_as_str += first_vec.at(i) + ", ";
        }
      }
      firsts_as_str += ")";
    }

    string lasts_as_str = "";
    if (last_vec.size() > 1){
      lasts_as_str = " (";
      for (int i = last_vec.size() - 2; i >= 0; --i){
        if (i == 0){
          lasts_as_str += last_vec.at(i);
        }
        else{
          lasts_as_str += last_vec.at(i) + ", ";
        }
      }
      lasts_as_str += ")";
    }
    
    string result;
    if (first_n == "unk" && last_n == "unk"){
      result = "Incognito";
    }
    else if (first_n == "unk"){
        result = last_n + lasts_as_str + " with unknown first name";
    }
    else if (last_n == "unk"){
      result = first_n + firsts_as_str + " with unknown last name";
    }
    else {
      result = first_n + firsts_as_str + " " + last_n + lasts_as_str;
    }
    return result;
  }
    
  
private:
  map<int, string> first_name_map;
  map<int, string> last_name_map;
};


//TEST 1
//int main() {
//  Person person;
//
//  person.ChangeFirstName(1900, "Eugene");
//  person.ChangeLastName(1900, "Sokolov");
//  person.ChangeLastName(1910, "Sokolov");
//  person.ChangeFirstName(1920, "Evgeny");
//  person.ChangeLastName(1930, "Sokolov");
//  cout << person.GetFullNameWithHistory(1940) << endl;
//  cout << person.GetFullName(1940) << endl;
//
//
//  return 0;
//}

//TEST 2
//int main() {
//  Person person;
//
//  person.ChangeFirstName(1965, "Polina");
//  person.ChangeLastName(1967, "Sergeeva");
//  for (int year : {1900, 1965, 1990}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }
//
//  person.ChangeFirstName(1970, "Appolinaria");
//  for (int year : {1969, 1970}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }
//
//  person.ChangeLastName(1968, "Volkova");
//  for (int year : {1969, 1970}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }
//
//  person.ChangeFirstName(1990, "Polina");
//  person.ChangeLastName(1990, "Volkova-Sergeeva");
//  cout << person.GetFullNameWithHistory(1990) << endl;
//
//  person.ChangeFirstName(1966, "Pauline");
//  cout << person.GetFullNameWithHistory(1966) << endl;
//
//  person.ChangeLastName(1960, "Sergeeva");
//  for (int year : {1960, 1967}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }
//
//  person.ChangeLastName(1961, "Ivanova");
//  cout << person.GetFullNameWithHistory(1967) << endl;
//
//  return 0;
//}


//TEST 3
int main() {
  Person person;

  person.ChangeFirstName(1965, "Polina");
  person.ChangeFirstName(1965, "Appolinaria");

  person.ChangeLastName(1965, "Sergeeva");
  person.ChangeLastName(1965, "Volkova");
  person.ChangeLastName(1965, "Volkova-Sergeeva");

  for (int year : {1964, 1965, 1966}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  return 0;
}
