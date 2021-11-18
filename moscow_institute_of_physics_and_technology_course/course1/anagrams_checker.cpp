// anagrams - if a word can be obtained by shifting letters
//            from other word
// write a program that checks if two words are anagrams
// 1. function BuildCharCounter:
//          - takes a string as an input
//          - and builds a map with letter counts
// 2. after having two maps (for 1st and 2nd words)
//    compare the map and return YES or NO
// INPUTS:
// int - number of operations (while < num_ops)
// two strings at a time

#include <iostream>
#include <map>

using namespace std;

map<char, int> BuildCharCounter(const string& word){
  map<char, int> char_counter;
  for (char i : word){
    ++char_counter[i];
  }
  return char_counter;
}

//void PrintMap(map<char, int>& m){
//  cout << "Printing out map: " << endl;
//  for (const auto& [key, value] : m) {
//    cout << key << ": " << value << endl;
//  }
//  cout << "========================" << endl;
//}

int main(){
  int num_ops;
  cin >> num_ops;
  
  while(num_ops > 0){
    string first_word, second_word;
    cin >> first_word >> second_word;
    
    map <char, int> first_map = BuildCharCounter(first_word);
    map <char, int> second_map = BuildCharCounter(second_word);
    
    if (first_map == second_map){
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
    --num_ops;
  }
  
  
  
//  string a = "hello";
//  map <char, int> map_hello = BuildCharCounter(a);
//  PrintMap(map_hello);
//
//  string b = "helol";
//  map <char, int> map_johnatan = BuildCharCounter(b);
//  PrintMap(map_johnatan);
//
//  cout << "Comparing the maps..." << endl;
//  cout << (map_hello == map_johnatan) << endl;
  
  return 0;
}
