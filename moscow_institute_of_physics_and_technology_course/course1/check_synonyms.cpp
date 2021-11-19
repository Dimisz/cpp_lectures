// build a dictionary of synonyms
// INPUTS
// q - num_operations
// ADD word1 word2 - add a pair of synonyms
// COUNT word - how many synonyms does 'word' have -> num
// CHECK word1 word2 - are word1 and word2 synonyms -> YES/NO


#include <iostream>
#include <map>
#include <set>

using namespace std;
void Add(map<string, set<string>>& dictionary, string& word1, string& word2){
  //dictionary[word1] =
  dictionary[word1].insert(word2);
  //dictionary[word2] =
  dictionary[word2].insert(word1);
}


void Count(map<string, set<string>>& dictionary, string& word){
  if (dictionary.count(word) == 0){
    cout << 0 << endl;
  }
  else {
    cout << dictionary[word].size() << endl;
  }
}

void Check(map<string, set<string>>& dictionary, string& word1, string& word2){
  if (dictionary[word1].count(word2) > 0 || dictionary[word2].count(word1) > 0){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}

int main(){
  int num_operations;
  cin >> num_operations;
  
  map<string, set<string>> dictionary;
  for (int i = 0; i < num_operations; ++i){
    string operation;
    cin >> operation;
    
    if (operation == "ADD"){
      string word1, word2;
      cin >> word1 >> word2;
      Add(dictionary, word1, word2);
    }
    else if (operation == "COUNT"){
      string word;
      cin >> word;
      
      Count(dictionary, word);
    }
    else if (operation == "CHECK"){
      string word1, word2;
      cin >> word1 >> word2;
      
      Check(dictionary, word1, word2);
    }
    
    
    
  }
  return 0;
}
