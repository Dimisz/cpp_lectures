#include <iostream>

using namespace std;


int main(){
//  int number {};
//
//  do {
//
//    cout << "Enter an integer between 0 and 10:" << endl;
//    cin >> number;
//  } while (number <= 0 || number >= 10);
//  cout << "Thanks!" << endl;
  
  
  //SIMPLE CHOICE MENU
  string choice {};
  //bool quit {false};
  
  do {
    cout << "---------------------" << endl;
    cout << "1. Do this" << endl;
    cout << "2. Do that" << endl;
    cout << "3. Do something else" << endl;
    cout << "Q: Quit\n" << endl;
    cout << "Enter your selection: ";
    cin >> choice;
    if (choice == "1"){
      cout << "Doing this..." << endl;
    }
    else if (choice == "2"){
      cout << "Doing that..." << endl;
    }
    else if (choice == "3"){
      cout << "Doing something else..." << endl;
    }
    else if (choice == "q" || choice == "Q"){
      cout << "Goodbye..." << endl;
      //quit = true;
    }
    else {
      cout << "Unknown option - try again..." << endl;
    }
  } while(choice != "q" && choice != "Q");
  
  return 0;
}
