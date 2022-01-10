#include <iostream>
#include "../Headers/Dog.h"

using namespace std;

int main()
{
  Dog* myDogPtr = new Dog("Rover", "German Shepard");
  Dog* yourDogPtr = new Dog("Fido", "Beagle");
  
  cout << "Using arrow number access" << endl;
  cout << myDogPtr->GetName() << " - " << myDogPtr->GetBreed() << endl;
  cout << yourDogPtr->GetName() << " - " << yourDogPtr->GetBreed() << endl;
  
  cout << endl;
  
  cout << "using dereferencing and the dot operator" << endl;
  cout << (*myDogPtr).GetName() << " - " << (*myDogPtr).GetBreed() << endl;
  cout << (*yourDogPtr).GetName() << " - " << (*yourDogPtr).GetBreed() << endl;
  
  delete myDogPtr;
  delete yourDogPtr;
  myDogPtr = nullptr;
  yourDogPtr = nullptr;

  return 0;
}
