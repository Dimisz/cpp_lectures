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
  for (char c : s1){
    cout << c << "-";
  }
  cout << endl;
  
  return 0;
}
