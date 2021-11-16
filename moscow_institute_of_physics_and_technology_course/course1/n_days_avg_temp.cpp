// inputs:
// n - number of days (vector.size())
// temperatures - n numbers
// 1. create a vector of size n
// 2. populate with temps from input
// 3. calculate the average temp
// 4. find how many days had the temp higher than avg
// 5. output indices of those days (separated by a space)

#include <iostream>
#include <vector>
using namespace std;

// creates a vector of size n and populates it from input
vector<int> make_vector(){
  int n;
  cin >> n;
  
  vector<int> temps(n);
  for (int& num : temps){
    cin >> num;
  }
  
  return temps;
}

// given a vector calculates its average (int)
int find_avg(vector<int>& vec){
  int sum = 0;
  
  for (auto i : vec){
    sum += i;
  }
  return sum / vec.size();
}

// given a vector and an avg returns
// a vector of temperatures higher than average
vector<int> above_avg(vector<int>& vec, int avg){
  vector<int> result;
  for (int i = 0; i < vec.size(); ++i){
    if (vec.at(i) > avg){
      result.push_back(i);
    }
  }
  return result;
}

int main(){
  
  vector<int> temps = make_vector();
  int avg = find_avg(temps);
  
  vector<int> above = above_avg(temps, avg);
  
//  for (auto i : temps){
//    cout << i << " ";
//  }
//  cout << "\nAvg: " << avg << endl;
  
  cout << above.size() << endl;
  for (auto i : above){
    cout << i << " ";
  }
  
  return 0;
}
