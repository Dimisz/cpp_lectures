#include <iostream>

using namespace std;

int main(){
  
  int age;
  cout << "Enter your age: " << endl;
  cin >> age;
  cin.get();
  
  if (age >= 60)
  {
    char gender;
    cout << "Enter your gender ('F' for female/ 'M' for Male):" << endl;
    cin >> gender;
    
    switch (gender)
    {
      case 'F':
      case 'f':
        cout << "You qualify for retired women discount club" << endl;
        break;
      default:
        cout << "Sorry, you don't qualify" << endl;
    }
  }
  else {
    cout << "Sorry, you don't qualify" << endl;
  }
  
  return 0;
}
