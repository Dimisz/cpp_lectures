// assign names to bus routes
// each route is a set of stops
// INPUTS:
// Q - number of operations
// N_stops stop_name1 stop_name2 ...
// if route doesn't exist -> New bus route_N
// if the route exists -> Already exists for route_n

#include <vector>
#include <map>
#include <iostream>

using namespace std;



int main(){
  map<vector<string>, int> bus_routes;
  int num_operations;
  cin >> num_operations;
  
  for (int i = 0; i < num_operations; ++i){
    int num_stops;
    cin >> num_stops;
    
    vector<string> route;
    for (int j = 0; j < num_stops; ++j){
      string stop;
      cin >> stop;
      route.push_back(stop);
    }
  
    if (bus_routes.count(route) != 0){
      cout << "Already exists for " << bus_routes[route] << endl;
    }
    else {
      bus_routes[route] = bus_routes.size()+1;
      cout << "New bus " << bus_routes[route] << endl;
    }
  }
  
  return 0;
}

