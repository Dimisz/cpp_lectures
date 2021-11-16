// write a function PalindromFilter
// takes a vector<string> words & int minLength
// returns all the strings from the input vector
// that are palindroms and have a length >= minLeng

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string x){
  if (x.size() == 1 || x.size() == 0){
    return true;
  }
  else {
    string temp = "";
    for (int i = (x.size()-1); i >= 0; --i){
      temp += x.at(i);
    }

    if (x == temp){
      return true;
    }
  }
  return false;
}

vector<string> PalindromFilter(vector<string> words, int minLength){
  
  vector<string> palindromes{};
  
  for (auto i: words){
    if (i.size() >= minLength && IsPalindrom(i)){
      palindromes.push_back(i);
    }
  }
  return palindromes;
}

int main(){
  

  return 0;
}
