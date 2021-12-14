#include <iostream>
#include <cmath>

#include <cstdlib> // for rand()
#include <ctime> //for time()

using namespace std;

int main(){
  int random_number {};
  size_t count {10}; //number of random numbers to generate
  int min {1}; // lower bound (inclusive)
  int max {6}; // upper bound (inclusive)
  
  // seed the random number generator
  // otherwise you'll get the same sequence every run
  
  cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
  srand(time(nullptr)); //seeding
  
  for (size_t i{1}; i <= count; ++i){
    random_number = rand() % max + min; //generate a random number
    cout << random_number << endl;
  }
  cout << endl;
  return 0;
}
