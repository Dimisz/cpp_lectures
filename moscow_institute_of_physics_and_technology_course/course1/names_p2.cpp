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
      joined_name += " ,";
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
    void ChangeFirstName(int year, const string& first_name){
      first_names[year] = first_name;
    }
    void ChangeLastName(int year, const string& last_name){
      last_names[year] = last_name;
    }
  
    string GetFullName(int year){
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
  
    string GetFullNameWithHistory(int year){
      // get first name with its history
      const string first_name = BuildJoinedName(FindFirstNamesHistory(year));
      // get last name with its history
      const string last_name = BuildJoinedName(FindLastNamesHistory(year));
      // join them with our ready function
      return BuildFullName(first_name, last_name);
    }
private:
  vector<string> FindFirstNamesHistory(int year){
    return FindNamesHistory(first_names, year);
  }
  vector<string> FindLastNamesHistory(int year){
    return FindNamesHistory(last_names, year);
  }
  
  map<int, string> first_names;
  map<int, string> last_names;
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


