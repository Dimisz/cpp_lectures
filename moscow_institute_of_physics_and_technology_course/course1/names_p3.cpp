#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>


using namespace std;

vector<string> FindNamesHistory(const map<int, string>& names_by_year, int year){
  
  vector<string> names;
  // iterate through the history in chronological order
  for (const auto& item : names_by_year){
    //if name is not from the future & differs from the previous
    if (item.first <= year && (names.empty() || names.back() != item.second)){
      // add the name to the history
      names.push_back(item.second);
    }
  }
  return names;
}

string BuildJoinedName(vector<string> names){
  // if no history - the name is Incognito
  if (names.empty()){
    return "";
  }
  // reverse chronological order
  reverse(begin(names), end(names));
  
  //start building full name from the last one
  string joined_name = names[0];
  
  //iterate all subsequent names
  for (int i = 1; i < names.size(); ++i){
    if (i == 1){
      // if that's the first name in history
      // separate it with a "("
      joined_name += " (";
    } else {
      // if its not the first name in history
      // separate it by ", "
      joined_name += ", ";
    }
    // add the name itself
    joined_name += names[i];
  }
  
  // if history has more than 1 name cloose the bracket
  if(names.size() > 1){
    joined_name += ")";
  }
  // the name with history is ready
  return joined_name;
}

string BuildFullName(const string& first_name, const string& last_name){
  if (first_name.empty() && last_name.empty()){
    return "Incognito";
  } else if (first_name.empty()){
    return last_name + " with unknown first name";
  } else if (last_name.empty()) {
    return first_name + " with unknown last name";
  } else {
    return first_name + " " + last_name;
  }
}

class Person {
  public:
    int birth_year;
    string fname;
    string lname;
    
    Person(const string& f_name, const string& l_name, const int& b_year){
      birth_year = b_year;
      fname = f_name;
      lname = l_name;
      first_names[birth_year] = fname;
      last_names[birth_year] = lname;
    };
  
    void ChangeFirstName(int year, const string& first_name){
      if (year >= birth_year){
        first_names[year] = first_name;
      }
    }
    void ChangeLastName(int year, const string& last_name){
      if (year >= birth_year){
        last_names[year] = last_name;
      }
    }
  
    string GetFullName(int year) const{
      // if given year is earlier than the year of birth
      if (year < birth_year){
        return "No person";
      } else {
        const vector<string> first_names_history = FindFirstNamesHistory(year);
        const vector<string> last_names_history = FindLastNamesHistory(year);
        
        //prepare data for BuildFullName
        //take latest first and last names and leave them
        // blank if they are unknown
        string first_name;
        string last_name;
        if(!first_names_history.empty()){
          first_name = first_names_history.back();
        }
        if(!last_names_history.empty()){
          last_name = last_names_history.back();
        }
        return BuildFullName(first_name, last_name);
      }
    }
  
    string GetFullNameWithHistory(int year) const{
      // if given year is earlier than the year of birth
      if (year < birth_year){
        return "No person";
      } else{
        // get first name with its history
        const string first_name = BuildJoinedName(FindFirstNamesHistory(year));
        // get last name with its history
        const string last_name = BuildJoinedName(FindLastNamesHistory(year));
        // join them with our ready function
        return BuildFullName(first_name, last_name);
      }
    }
private:
  vector<string> FindFirstNamesHistory(int year) const{
    return FindNamesHistory(first_names, year);
  }
  vector<string> FindLastNamesHistory(int year) const {
    return FindNamesHistory(last_names, year);
  }
  
  map<int, string> first_names;
  map<int, string> last_names;
};


int main() {
  Person person("Polina", "Sergeeva", 1960);
  for (int year : {1959, 1960}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  person.ChangeFirstName(1965, "Appolinaria");
  person.ChangeLastName(1967, "Ivanova");
  for (int year : {1965, 1967}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  return 0;
}

//TEST 5
//int main() {
//
//  Person person("-1_first", "-1_last", -1);
//
//  int year = -3;
//  person.ChangeFirstName(year, std::to_string(year) + "_first");
//  person.ChangeLastName(year, std::to_string(year) + "_last");
//
//  year = 7;
//  std::cout << "year: " << year << '\n';
//  std::cout << person.GetFullNameWithHistory(year) << '\n';
//    std::cout << person.GetFullName(year) << '\n';
//
//  return 0;
//}
