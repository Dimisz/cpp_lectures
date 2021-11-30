#include <iostream>

using namespace std;


class Incognizable {
  public:
    Incognizable(){
      int_a = 0;
      int_b = 1;
    };
    
    Incognizable(const int& a){
      int_a = a;
      int_b = 1;
    };
  
    Incognizable(const int& a, const int& b){
      int_a = a;
      int_b = b;
    };
    
  private:
    int int_a;
    int int_b;
};
//
//int main() {
//  Incognizable a;
//  Incognizable b = {};
//  Incognizable c = {0};
//  Incognizable d = {0, 1};
//  return 0;
//}
