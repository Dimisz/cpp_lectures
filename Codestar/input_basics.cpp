#include <iostream>

using namespace std;

int main(){
  string fullName, location;
  int initialScore;
  
  cout << "Eneter the initial score (from 0 to 100): " << endl;
  cin >> initialScore;
  cin.get();//Consume the newline
  
  cout << "Enter you full name: " << endl;
  getline(cin, fullName);
  
  cout << "Enter your location: city, state/province, country: " << endl;
  getline(cin, location);
  
  
  
  
  cout << "Hello, " << fullName << "!\n"
       << "We heard you are from " << location << ".\n"
       << "Your original score is: " << initialScore << ",\n"
       << "But with five points added, your score is "
  << initialScore + 5 << "." << endl;
  
  
  return 0;
}
