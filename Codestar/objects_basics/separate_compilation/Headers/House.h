#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
  public:
  
    House();
    House(int num_stores, int num_windows, string color);
    ~House();
  
    void SetNumStores(int num_stores);
      
    int GetNumStores() const;
      
    void SetNumWindows(int num_windows);
      
    int GetNumWindows() const;
      
    void SetColor(string color);
  
    string GetColor() const;
  
    void PrintHouseData() const;
  
  private:
    int num_stores;
    int num_windows;
    string color;
};

#endif
