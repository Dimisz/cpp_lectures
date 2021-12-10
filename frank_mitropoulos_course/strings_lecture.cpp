#include <string>
#include <iostream>

using namespace std;


int main(){
  string s0;
  string s1 {"Apple"};
  string s2 {"Banana"};
  string s3 {"Kiwi"};
  string s4 {"apple"};
  string s5 {s1};
  string s6 (s1, 0, 3);
  string s7(10, 'X');

  //Initialization
//  cout << "\nInitialization" << "\n----------------------" << endl;
//  cout << "s1 is initialized to:\t" << s1 << endl;
//  cout << "s2 is initialized to:\t" << s2 << endl;
//  cout << "s3 is initialized to:\t" << s3 << endl;
//  cout << "s4 is initialized to:\t" << s4 << endl;
//  cout << "s5 is initialized to:\t" << s5 << endl;
//  cout << "s6 is initialized to:\t" << s6 << endl;
//  cout << "s7 is initialized to:\t" << s7 << endl;
  
  // Comparison
//  cout << "\nComparison" << "\n-----------------------" << endl;
//  cout << boolalpha;
//  cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
//  cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
//  cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
//  cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
//  cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
//  cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
//  cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;
//
  
  //ASSIGNMENT
//  cout << "\nAssignment" << "\n-----------------------" << endl;
//  s1 = "Watermelon";
//  cout << "s1 is now: " << s1 << endl;
//  s2 = s1;
//  cout << "s2 is now: " << s2 << endl;
//
//  s3 = "Vladimir";
//  cout << "s3 is now: " << s3 << endl;
//
//  s3[0] = 'W';
//  cout << "s3 change first letter to 'W': " << s3 << endl;
//
//  s3.at(0) = 'U';
//  cout << "s3 change first letter to 'U': " << s3 << endl;
  
  
  //CONCATENATION
//  s3 = "Watermelon";
//  cout << "\nConcatenation" << "\n-----------------------" << endl;
//
//  s3 = s5 + " and " + s2 + " juice";
//  cout << "s3 is now: " << s3 << endl;
//
  //s3 = "nice " + "cold " + s5 + " juice"; //compilor error

  //FOR LOOP
//  cout << "\nLLooping" << "\n-----------------------" << endl;
//
//  s1 = "Apple";
//  for (size_t i {0}; i < s1.length(); ++i){
//    cout << s1.at(i) << " ";
//  }
//  cout << endl;
  
  //Range based loop
//  for (char c : s1){
//    cout << c << "-";
//  }
//  cout << endl;
  
  
  //SUBSTRING
//  cout << "\nSubstring" << "\n-----------------------" << endl;
//  s1 = "This is a test";
//
//  cout << s1.substr(0,4) << endl;
//  cout << s1.substr(5, 2) << endl;
//  cout << s1.substr(10, 4) << endl;
  
  
  //ERASE
//  cout << "\nErasing" << "\n-----------------------" << endl;
//  s1 = "This is a test";
//  s1.erase(0, 5);
//  cout << "s1 is now: " << s1 << endl;
  
  
  //GETLINE
//  cout << "\ngetline" << "\n-----------------------" << endl;
//  string full_name {};
//
//  cout << "Enter your full name:" << endl;
//  getline(cin, full_name);
//
//  cout << "Your full name is: " << full_name << endl;
  
  
  //FIND
//  cout << "\nfind" << "\n-----------------------" << endl;
//
//  s1 = "The secret word is Boo";
//  string word {};
//
//  cout << "Enter the word to find: " << endl;
//  cin >> word;
//
//  size_t position = s1.find(word);
//  if (position != string::npos){
//    cout << "Found " << word << " at position: " << position << endl;
//  }
//  else {
//    cout << "Sorry, " << word << " not found" << endl;
//  }

  // EXERCISE 1
//  string unformatted_full_name {"StephenHawking"};
//
//  string first_name, last_name, formatted_full_name;
//  first_name = unformatted_full_name.substr(0,7);
//  last_name = unformatted_full_name.substr(7, 7);
//  formatted_full_name = first_name + last_name;
//  formatted_full_name.insert(7, " ");
//
//  cout << formatted_full_name;
  
  //EXERCISE 2
  string journal_entry_1 {"Isaac Newton"};
  string journal_entry_2 {"Leibniz"};
      
      
  size_t erase_index = journal_entry_1.find(" ");
  journal_entry_1.erase(0, erase_index+1);
      
  if (journal_entry_2 < journal_entry_1)
    journal_entry_1.swap(journal_entry_2);
      
  cout << journal_entry_1 << "\n" << journal_entry_2;
  
  return 0;
}
