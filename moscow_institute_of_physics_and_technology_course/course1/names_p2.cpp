#include <iostream>
#include <map>
#include <vector>

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
        first_vec.push_back(first_n);
      }
    }
    //first_vec.pop_back();
    
    for (const auto& [y, n] : last_name_map){
      if (year >= y){
        last_n = n;
        last_vec.push_back(last_n);
      }
    }
    //last_vec.pop_back();
//    cout << "=================" << endl;
//    cout << "First name vec: " << endl;
//    for (const auto& i : first_vec){
//      cout << i << " ";
//    }
//    cout << endl;
//
//    cout << "Last name vec: " << endl;
//    for (const auto& i : last_vec){
//      cout << i << " ";
//    }
//    cout << "==================" << endl;
    
    string firsts_as_str = "";
    if (first_vec.size() > 1){
      firsts_as_str = " (";
      for (int i = first_vec.size()-1; i >= ; --i){
        firsts_as_str += first_vec[i] + ", ";
      }
      firsts_as_str += ")";
    }

    string lasts_as_str = "";
    if (last_vec.size() > 1){
      lasts_as_str = " (";
      for (int i = last_vec.size()-1; i >= ; ++i){
        lasts_as_str += last_vec[i] + ", ";
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



int main() {
  Person person;
  
  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeFirstName(1990, "Polina");
  person.ChangeLastName(1990, "Volkova-Sergeeva");
  cout << person.GetFullNameWithHistory(1990) << endl;
  
  person.ChangeFirstName(1966, "Pauline");
  cout << person.GetFullNameWithHistory(1966) << endl;
  
  person.ChangeLastName(1960, "Sergeeva");
  for (int year : {1960, 1967}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeLastName(1961, "Ivanova");
  cout << person.GetFullNameWithHistory(1967) << endl;
  
  return 0;
}
