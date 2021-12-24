#include <iostream>
#include <string>
#include "House.h"


using namespace std;


void PrintHouseData(const House& house);

int main()
{
  House my_house;
  House your_house;
  
  my_house.SetNumStores(2);
  my_house.SetNumWindows(6);
  my_house.SetColor("red");
  
  your_house.SetNumStores(3);
  your_house.SetNumWindows(10);
  your_house.SetColor("blue");
  
  PrintHouseData(my_house);
  PrintHouseData(your_house);
  
  return 0;
}

void PrintHouseData(const House& house)
{
  cout << "The house is " << house.GetColor()
       << " and has " << house.GetNumStores() << " stores "
       << "and " << house.GetNumWindows() << " windows." << endl;
}

