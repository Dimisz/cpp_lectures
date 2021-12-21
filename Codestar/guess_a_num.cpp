#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  srand(time(nullptr));
  
  int secret_num = rand() % 100 + 1; // num btween 1 and 100
  bool not_guessed = true;
  int num_guesses = 0;
  
  //cout << "Secret num: " << secret_num << endl;
  while(not_guessed){
    num_guesses++;
    cout << "Guess a number between 1 and 100" << endl;
    
    int user_guess;
    cin >> user_guess;
    
    if (user_guess == secret_num){
      cout << "Congratulations! You guessed the number in "
      << num_guesses << " guesses!" << endl;
      not_guessed = false;
    }
    else if (user_guess < 1 || user_guess > 100){
      cout << "That was a waste of guess!" << endl;
      cout << "The number should be between 1 and 100" << endl;
    }
    else if (user_guess < secret_num){
      cout << "Your guess: " << user_guess << " is too low" << endl;
    }
    else if (user_guess > secret_num){
      cout << "Your guess: " << user_guess << " is too high" << endl;
    }
    cout << "--------------------" << endl;
  }
}
