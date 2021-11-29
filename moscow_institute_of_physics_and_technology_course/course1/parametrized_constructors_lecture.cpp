#include <iostream>
#include <vector>

using namespace std;


class Route {
  public:
//    Route(){} // does nothing, was created by compiler by default
    Route(){
      source = "Moscow";
      destination = "Petushki";
      UpdateLength();
    }
    Route(const string& new_source,
          const string& new_destination){
      source = new_source;
      destination = new_destination;
      UpdateLength();
    }
  // .....
};

void PrintRoute(const Route& route);

Route GetRoute(bool is_empty){
  if (is_empty){
    return {};
  } else {
    return {"Moscow", "Minsk"};
  }
}

//parametrized constructors with structs
struct Lecture {
  string title;
  int duration;
};
Lecture lecture = {"OOP", 5400};
// works ok without constructors

//we don't need default constructors for Structs
struct NewLecture {
  string title = "C++";
  int duration = 0;
}
NewLecture new_lecture;
//if don't pass parameters - will be initialized to default
NewLecture new_lecture2 = {"OOP", 5400};
// this syntax still works

int main(){
  Route route1; //by defaullt makes route Moscow - Petushki
  Route route2("London", "Rome"); //parametrized
  
  
  // printing out default route
  PrintRoute(Route());
  PrintRoute({});
  
  //printing out parametrized route
  PrintRoute(Route("Moscow", "Minsk"));
  PrintRoute({"Moscow", "Minsk"});
  
  vector<Route> routes;
  routes.push_back({"Moscow", "Minsk"});
  
  //constructors with vectors
  vector<int> GetNumbers(bool is_empty){
    if (is_empty){
      return {};
    } else {
      return {8, 6, 9, 6};
    }
  }
  
  return 0;
}
