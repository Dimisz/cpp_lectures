// write a to-do list for a month
// takes the followign inputs:
// ADD i s - add event 's' to day 'i' of the current month
// DUMP i - print out all the event scheduled for day i
// NEXT - move to a list for next month:
//        all the events are copied from the old list
//        after the events copied the old list is dropped
//     Manage different number of days:
//        - if next month has more days:
//              additional days are left blank (no events)
//        - if next month has less days:
//              all the events from 'extra' days are moved
//              to the last day of a new month

// initial month is January
// February always have 28 days

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;
vector<vector<string>> make_a_month(int days){
  
  vector<vector<string>> month(days);
  //cout << month.size();
  
  return month;
}

void Dump(int i, vector<vector<string>>& current_month){
  int index = i - 1;
  cout << current_month[index].size() << " ";
  for (auto event : current_month[index]){
    cout << event << " ";
  }
  cout << endl;
}

void Add (int i, string s, vector<vector<string>>& current_month){
  int index = i - 1;
  current_month[index].push_back({s});
}


void Next (vector<vector<string>>& current_month, int days){
  if (current_month.size() <= days){
    current_month.resize(days);
  }
  else{
    vector<string> temp;
    
    for(int i = days; i < current_month.size(); ++i){
      for(auto event : current_month[i]){
        temp.push_back(event);
      }
    }
    current_month.resize(days);
    int last_elt_index = current_month.size()-1;
    for (auto i: temp){
      current_month[last_elt_index].push_back(i);
    }
  }
}

int main(){
  int days_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int month_count = 0;
  vector<vector<string>> v = make_a_month(days_in_months[month_count]);
  
  int q; //how many operations to expect
  cin >> q;
  
  while(q > 0){
    string operation;
    cin >> operation;
    
    if (operation == "NEXT"){
      ++month_count;
      int num_days = days_in_months[month_count % 12]; //avoid overflow over 12
      Next(v, num_days);
    }
    else if (operation == "ADD"){
      int ind;
      string event;
      cin >> ind >> event;
      Add(ind, event, v);
    }
    else if (operation == "DUMP"){
      int ind;
      cin >> ind;
      Dump(ind, v);
    }
    
    --q;
  }
  

  
  return 0;
}

