#include <iostream>
#include <string>
#include "House.h"


using namespace std;

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
  
  my_house.PrintHouseData();
  your_house.PrintHouseData();
  
  return 0;
}



