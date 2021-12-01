#include <iostream>
#include <vector>
#include <string>

using namespace std;


int ComputeDistance(const string& source, const string& destination){
  return source.length() - destination.length();
}

class Route {
public:
  Route() {
    source = "Moscow";
    destination = "Petushki";
    UpdateLength();
    cout << "Default constructed" << endl;
  }
  Route(const string& new_source, const string& new_destination) {
    source = new_source;
    destination = new_destination;
    UpdateLength();
    cout << "Constructed" << endl;
  }
  // DESTRUCTOR
  ~Route(){
    for (const string& entry: compute_distance_log){
      cout << entry << endl;
    }
    cout << "Destructed" << endl; //check when destructor called
  }
  string GetSource() const {
    return source;
  }
  string GetDestination() const {
    return destination;
  }
  int GetLength() const {
    return length;
  }
  void SetSource(const string& new_source){
    source = new_source;
    UpdateLength();
  }
  void SetDestination(const string& new_destination){
    destination = new_destination;
    UpdateLength();
  }
  
private:
  void UpdateLength(){
    length = ComputeDistance(source, destination);
    compute_distance_log.push_back(
                                   source + " - " + destination);
  }
  string source;
  string destination;
  int length;
  vector<string> compute_distance_log;
};


int main() {
//  Route route("Moscow", "Saint Petersbough");
//  route.SetSource("Vyborg");
//  route.SetDestination("Vologda");
  
//
//  cout << 1 << endl;
//  Route route;
//  cout << 2 << endl;
  
  for (int i : {0, 1}){
    cout << "Step " << i << ": " << 1 << endl;
    Route route;
    cout << "Step " << i << ": " << 2 << endl;
  }
  cout << "End" << endl;
  return 0;
}
