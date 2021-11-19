// write bus route storage system
// INPUTS:
// Q - number of operations
// NEW_BUS bus stop_count stop1 stop2 - add a new bus with
//          stops
// BUSES_FOR_STOP stop - print out all busses for a given stop
// STOPS_FOR_BUS bus - given bus print out all its stops
// ALL_BUSES - print out all buses with all stops

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

void NewBus(map<string, vector<string>>& buses, string& name, vector<string>& stops_vec){
  //string bus_name = "Bus " + name;
  buses[name] = stops_vec;
}

void BuildStopsMap (map<string, vector<string>>& stops_map, string& name, vector<string>& stops_vec){
//  cout << "Building stops map" << endl;
  
  for (const auto& stop_name : stops_vec){
    if (stops_map.count(stop_name) == 0){
      vector<string> v;
      stops_map[stop_name] =  v;
    }
    stops_map[stop_name].push_back(name);
    
  }
//  printing out values when checking
//  for (auto [key, value] : stops_map){
//    cout << key << ": ";
//    for (auto i : value){
//      cout << i << " ";
//    }
//    cout << endl;
//  }
}

void AllBuses(map<string, vector<string>>& buses){
  if (buses.size() == 0){
    cout << "No buses" << endl;
  }
  else{
    for (const auto& [key, value] : buses){
      cout << "Bus " << key << ": ";
      for (const auto& i : value){
        cout << i << " ";
      }
      cout << endl;
    }
  }
}

void StopsForBus(map<string, vector<string>>& buses, string& name, map<string, vector<string>>& stops_map){
  
  if (buses.count(name) == 0){
    cout << "No bus" << endl;
  }
  else {
    for (const auto& i : buses[name]){
      cout << "Stop " << i << ": ";
      if (stops_map[i].size() == 0 || (stops_map[i].size() == 1 && stops_map[i].at(0) == name)){
        cout << "no interchange" << endl;
      }
      else {
        for (auto& j : stops_map[i]){
          if (j != name){
            cout << j << " ";
          }
        }
      cout << endl;
      }
    }
  }
}

void BusesForStop(map<string, vector<string>>& stops_map, string& stop_name){
//  cout << "Printing buses for " << stop_name << endl;
  if (stops_map.count(stop_name) == 0){
    cout << "No stop" << endl;
  }
  else {
    for (const auto& i : stops_map[stop_name]){
        cout << i << " ";
      }
      cout << endl;
  }
}


int main(){
  map<string, vector<string>> buses;
  map<string, vector<string>> stops_map;
  
  int num_ops;
  cin >> num_ops;
  
  for (int i = 0; i < num_ops; ++i){ //main loop
    string operation;
    cin >> operation;
    
    if (operation == "ALL_BUSES"){    //all_buses op
      AllBuses(buses);
    }                                 //end of all_buses
    
    else if (operation == "NEW_BUS"){  //new bus op
      string name;
      cin >> name;
//      cout << "Bus name: " << name << endl;
      int num_stops;
      cin >> num_stops;
//      cout << "Num stops " << num_stops << endl;
      
      vector<string> stops_names;
      for (int j = 0; j < num_stops; ++j){
        string stop_name;
        cin >> stop_name;
//        cout << "Stop name: " << stop_name << endl;
        stops_names.push_back(stop_name);
      }
//      cout << "Checking vector collecting names.." << endl;
//      for (auto& i : stops_names){
//        cout << i << " ";
//      }
//      cout << "before new_bus" << endl;
      NewBus(buses, name, stops_names);
//      cout << "before build stops map" << endl;
      BuildStopsMap(stops_map, name, stops_names);
//      cout << "after stops map" << endl;
      
    }                                  // end of new bus op
    
    else if (operation == "STOPS_FOR_BUS"){
      string name;
      cin >> name;
      StopsForBus(buses, name, stops_map);
    }
    
    else if (operation == "BUSES_FOR_STOP"){
      string stop_name;
      cin >> stop_name;
      BusesForStop(stops_map, stop_name);
    }
  } //main loop
  
  
  return 0;
}


//TEACHERS SOLUTION
//#include <string>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//// ответ на запрос BUSES_FOR_STOP
//void PrintBusesForStop(map<string, vector<string>>& stops_to_buses,
//                       const string& stop) {
//  if (stops_to_buses.count(stop) == 0) {
//    cout << "No stop" << endl;
//  } else {
//    for (const string& bus : stops_to_buses[stop]) {
//      cout << bus << " ";
//    }
//    cout << endl;
//  }
//}
//
//// ответ на запрос STOPS_FOR_BUS
//void PrintStopsForBus(map<string, vector<string>>& buses_to_stops,
//                      map<string, vector<string>>& stops_to_buses,
//                      const string& bus) {
//  if (buses_to_stops.count(bus) == 0) {
//    cout << "No bus" << endl;
//  } else {
//    for (const string& stop : buses_to_stops[bus]) {
//      cout << "Stop " << stop << ": ";
//      
//      // если через остановку проходит ровно один автобус,
//      // то это наш автобус bus, следовательно, пересадки тут нет
//      if (stops_to_buses[stop].size() == 1) {
//        cout << "no interchange";
//      } else {
//        for (const string& other_bus : stops_to_buses[stop]) {
//          if (bus != other_bus) {
//            cout << other_bus << " ";
//          }
//        }
//      }
//      cout << endl;
//    }
//  }
//}
//
//// ответ на запрос ALL_BUSES
//void PrintAllBuses(const map<string, vector<string>>& buses_to_stops) {
//  if (buses_to_stops.empty()) {
//    cout << "No buses" << endl;
//  } else {
//    for (const auto& bus_item : buses_to_stops) {
//      cout << "Bus " << bus_item.first << ": ";
//      for (const string& stop : bus_item.second) {
//        cout << stop << " ";
//      }
//      cout << endl;
//    }
//  }
//}
//
//int main() {
//  int q;
//  cin >> q;
//
//  map<string, vector<string>> buses_to_stops, stops_to_buses;
//
//  for (int i = 0; i < q; ++i) {
//    string operation_code;
//    cin >> operation_code;
//
//    if (operation_code == "NEW_BUS") {
//
//      string bus;
//      cin >> bus;
//      int stop_count;
//      cin >> stop_count;
//      
//      // с помощью ссылки дадим короткое название вектору
//      // со списком остановок данного автобуса;
//      // ключ bus изначально отсутствовал в словаре, поэтому он автоматически
//      // добавится туда с пустым вектором в качестве значения
//      vector<string>& stops = buses_to_stops[bus];
//      stops.resize(stop_count);
//      
//      for (string& stop : stops) {
//        cin >> stop;
//        // не забудем обновить словарь stops_to_buses
//        stops_to_buses[stop].push_back(bus);
//      }
//
//    } else if (operation_code == "BUSES_FOR_STOP") {
//
//      string stop;
//      cin >> stop;
//      PrintBusesForStop(stops_to_buses, stop);
//
//    } else if (operation_code == "STOPS_FOR_BUS") {
//
//      string bus;
//      cin >> bus;
//      PrintStopsForBus(buses_to_stops, stops_to_buses, bus);
//
//    } else if (operation_code == "ALL_BUSES") {
//
//      PrintAllBuses(buses_to_stops);
//
//    }
//  }
//
//  return 0;
//}
