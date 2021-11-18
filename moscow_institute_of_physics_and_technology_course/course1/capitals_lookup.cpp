// a program to look up capitals
// INPUTS:
// number of operations
// 1. CHANGE_CAPITAL country new_capital:
//    - intro new country with new_caapital
//      if country not in map
//    - if country's capital is new_capital:
//      Country country hasn't changed its capital
//    - Country has changed its capital from XXX to XXX

// 2. RENAME old_country_name new_country_name:
//    - "Incorrect name, skip" if new_country_name == old
//    - "Counntry old_country_name with capital has been
//      renamed to new_country_name"

// 3. DUMP
//    - "There are no countries in the world" if no countries
//    added yet
//    - country | capital

// 4. ABOUT country
//    - "Country country doesn't exist" if not in the map
//    - "Country country has capital capital"

#include <iostream>
#include <map>

using namespace std;

void ChangeCapital(map<string, string>& m, string& country, string& capital){
  
  if (m.count(country) == 0){
    m[country] = capital;
    cout << "Introduce new country " << country << " with capital " << m[country] << endl;
  }
  else if (m[country] == capital){
    cout << "Country " << country << " hasn't changed its capital" << endl;
  }
  else if (m[country] != capital){
    string old_capital = m[country];
    m[country] = capital;
    cout << "Country " << country << " has changed its capital from " << old_capital << " to " << m[country] << endl;
  }
}

void Rename(map<string, string>& m, string& old_name, string& new_name){
  if ((m.count(old_name) == 0) || (m.count(new_name) != 0) || (new_name == old_name)){
    cout << "Incorrect rename, skip" << endl;
  }
  else {
    m[new_name] = m[old_name];
    m.erase(old_name);
    cout << "Country " << old_name << " with capital " << m[new_name] << " has been renamed to " << new_name << endl;
  }
}

void About(map<string, string>& m, string& country){
  if (m.count(country) == 0){
    cout << "Country " << country << " doesn't exist" << endl;
  }
  else {
    cout << "Country " << country << " has capital " << m[country] << endl;
  }
}

void Dump(map<string, string>& m){
  if (m.size() == 0){
    cout << "There are no countries in the world" << endl;
  }
  else {
    for (const auto& [key, value] : m){
      cout << key << "/" << value << " ";
    }
  }
}



int main(){
  int num_operations;
  cin >> num_operations;
  map<string, string> countries;
  
  for (int i = 0; i < num_operations; ++i){
    string operation;
    cin >> operation;
    
    if (operation == "DUMP"){
      Dump(countries);
    }
    else if (operation == "ABOUT"){
      string country;
      cin >> country;
      
      About(countries, country);
    }
    else if (operation == "RENAME"){
      string old_name, new_name;
      cin >> old_name >> new_name;
      
      Rename(countries, old_name, new_name);
    }
    else if (operation == "CHANGE_CAPITAL"){
      string country_name, new_capital;
      cin >> country_name >> new_capital;
      
      ChangeCapital(countries, country_name, new_capital);
    }
  
  }

  
  return 0;
}
