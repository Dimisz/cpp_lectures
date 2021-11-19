#include <iostream>
#include <set>
#include <vector>

using namespace std;
void PrintSet(const set<string>& s){
  cout << "Set size: " << s.size() << endl;
  for (auto x : s){
    cout << x << endl;
  }
}
int main(){
//  set<string> famous_persons;
//  famous_persons.insert("Stroustrup");
//  famous_persons.insert("Ritchie");
//  famous_persons.insert("Stroustrup");
//  famous_persons.insert("Vladimir");
//  PrintSet(famous_persons);
//
//  famous_persons.erase("Vladimir");
//  PrintSet(famous_persons);
//
//
//  set<string> months_names = {"January", "March", "February", "March"};
//  PrintSet(months_names);
//  set<string> other_months_names = {"March", "January", "February"};
//  cout << (months_names == other_months_names) << endl;
//  cout << "Count March: " << months_names.count("March") << endl;
  
  
  //CONVERTING VECTOR TO SET
  vector<string> v = {"a", "b", "c", "b"};
  set<string> s(begin(v), end(v));
  PrintSet(s);
  
  
  
  return 0;
}
