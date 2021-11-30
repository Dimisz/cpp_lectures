#include <iostream>
#include <map>


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
    string first = "unk";
    set<string> firsts;
    string last = "unk";
    set<string> lasts;
    //check first name first
    for (const auto& [y, n] : first_name_map){
      if (year >= y){
        first = n;
        firsts.insert(first);
      }
    }
    firsts.erase(first);
    
    for (const auto& [y, n] : last_name_map){
      if (year >= y){
        last = n;
        lasts.insert(last);
      }
    }
    lasts.erase(last);
    
    string firsts_as_str = "";
    if (firsts.size() != 0){
      firsts_as_str = " (";
      for (auto& i : firsts){
        firsts_as_str += i + ", ";
      }
      firsts_as_str += ")";
    }
    
    string lasts_as_str = "";
    if (lasts.size() != 0){
      lasts_as_str = " (";
      for (auto& i : lasts){
        lasts_as_str += i + ", ";
      }
      lasts_as_str += ")";
    }
    
    string result;
    if (first == "unk" && last == "unk"){
      result = "Incognito";
    }
    else if (first == "unk"){
        result = last + lasts_as_str + " with unknown first name";
    }
    else if (last == "unk"){
      result = first + firsts_as_str + " with unknown last name";
    }
    else {
      result = first + firsts_as_str + " " + last + lasts_as_str;
    }
    return result;
  }
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
