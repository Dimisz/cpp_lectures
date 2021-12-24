#include <iostream>
#include <string>

using namespace std;



class House {
  public:
    void SetNumStores(int num_stores)
    {
      this->num_stores = num_stores;
    }
  
    int GetNumStores() const
    {
      return num_stores;
    }
    
    void SetNumWindows(int num_windows)
    {
      this->num_windows = num_windows;
    }
    
    int GetNumWindows() const
    {
      return num_windows;
    }
    
    void SetColor(string color)
    {
      this->color = color;
    }
    string GetColor() const
    {
      return color;
    }
  
  private:
    int num_stores;
    int num_windows;
    string color;
  
};

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
