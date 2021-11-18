#include <iostream>
#include <map>

using namespace std;

void PrintMap(const map<int, string>& m){
  cout << "Size = " << m.size() << endl;
  for (auto item : m){
    cout << item.first << ": " << item.second << endl;
  }
}

void PrintReversedMap(const map<string, int>& m){
  cout << "Size = " << m.size() << endl;
  for (auto item : m){
    cout << item.first << ": " << item.second << endl;
  }
}


map<string, int> BuildReversedMap (const map<int, string>& m){
  map<string, int> result;
  for (auto i : m){
    result[i.second] = i.first;
  }
  return result;
}


int main(){
  map<int, string> events;
  events[1950] = "Bjarne Stroustrup's birth";
  events[1941] = "Dennis Ritchie's birth";
  events[1970] = "UNIX epoch starts";
  PrintMap(events);
  
  //Printing out value by key
  // if key not in the map a blank would be printed out
  // (but no error when trying to access non-existent key)
  cout << events[1950] << endl;
  
  //erasing values (pass a key)
  events.erase(1970);
  PrintMap(events);
  
  // reverse a map
  map <string, int> reversed_events = BuildReversedMap(events);
  
  PrintReversedMap(reversed_events);
  
  
  
  
  return 0;
}
