#include <iostream>
#include "AngryCatException.h"
using namespace std;

void FeedKitty(int num_treats);

int main()
{
  
  int num_treats = 0;
  cout << "How many treats do you want to feed kitty?" << endl;
  cin >> num_treats;
  
  try
  {
    FeedKitty(num_treats);
  }
  catch(const AngryCatException& err)
  {
    cout << err.what() << endl;
  }
  return 0;
}

void FeedKitty(int num_treats)
{
  if(num_treats < 3)
  {
    throw AngryCatException();
  }
  else if(num_treats < 6){
    throw AngryCatException("I'm still not happy");
  }
  cout << "Kitty is happy with " << num_treats << " treats"
         << endl;
}
