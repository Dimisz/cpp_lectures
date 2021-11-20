#include <iostream>
#include <map>
#include <vector>

using namespace std;

void PrintMap(const map<string, int>& m){
  for (const auto& item : m){ //USEFUL TRICK
    cout << item.first << ": " << item.second << endl;
  }
}


map<string, int> MakeCountMap(const vector<string>& v){
  map<string, int> result;
  for (const auto& i : v){
// VERBOSE ==================
//    // if (result.count(i) == 0)  // INSTRUCTORS TAKE
//    if (result.find(i) == result.end()){
//      result[i] = 1;
//    }
//    else {
//      result[i] += 1;
//    }
// END VERBOSE  ====
    ++result[i]; // if not there the elt will be created
    // if there - will be incremented
  }
  return result;
}



int main(){
  map<string, int> m = {{"one", 1}, {"two", 2}, {"three", 3}};
  PrintMap(m);
  
  // map.erase(key) -> takes only one arg
  cout << "Erasing.. " << endl;
  m.erase("three");
  m["five"] += 5;
  PrintMap(m);
  
  // Counting words in vector using map
  cout << "========COUNTING WORDS IN VEC==========" << endl;
  vector<string> some_words = {"one", "two", "one", "five" , "three", "two"};
  map <string, int> words_occurences = MakeCountMap(some_words);
  
  PrintMap(words_occurences);
  
  cout << "=========QUIZ==============" << endl;
  vector<string> words = {"one", "two", "three"};
  map<char, vector<string>> grouped_words;
  for (const string& word : words) {
    grouped_words[word[0]].push_back(word);
  }
  for (const auto& item : grouped_words) {
    cout << item.first << endl;
    for (const string& word : item.second) {
      cout << word << " ";
    }
    cout << endl;
  }
  
  cout << "Quiz" <<endl;
  map<int, string> me = {{1, "odd"}, {2, "even"}, {1, "one"}};
  me[2] = "two";
  me.erase(1);
  me[3] = "three";
  me.erase(4);
  me[5] = "five";
  cout << me.size() << endl;
  string x = me[10];
  cout << me.size();
  
  
  
  return 0;
}
