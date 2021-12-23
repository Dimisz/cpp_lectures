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
      return this->num_windows;
    }
    
    void SetColor(string color)
    {
      this->color = color;
    }
    string GetColor() const
    {
      return this->color;
    }
  
  private:
    int num_stores;
    int num_windows;
    string color;
  
};
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
  
  cout << "My house is " << my_house.GetColor()
       << " and has " << my_house.GetNumStores() << " stores "
       << "and " << my_house.GetNumWindows() << " windows." << endl;
  
  cout << "Your house is " << your_house.GetColor()
       << " and has " << your_house.GetNumStores() << " stores "
       << "and " << your_house.GetNumWindows() << " windows." << endl;
  
  return 0;
}
