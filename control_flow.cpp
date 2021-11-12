#include <iostream>
using namespace std;

int main(){
  
  int length{}, width{}, height{};
  double base_cost{2.50};
  
  const int tier1_threshold{100}; // volume
  const int tier2_threshold{500}; // volume
  
  int max_dimensions_length {10}; //inches
  
  double tier1_surcharge{0.10}; // 10% extra
  double tier2_surcharge{0.25}; // 25% extra
  
  int package_volume{};
  
  cout << "Welcome to the package cost calculator" << endl;
  cout << "Enter the height, width and height of the package separated by spaces: ";
  cin >> length >> width >> height;
  
  if ((length > max_dimensions_length) || (width > max_dimensions_length) || (height > max_dimensions_length)){
    cout << "Sorry we do not accept packages with any side bigger than 10 inches" << endl;
  }
  else{
    double total{};
    package_volume = length * width * height;
    if (package_volume > tier2_threshold){
      total = (tier2_threshold * base_cost) + ((package_volume - tier2_threshold) * base_cost * tier2_surcharge);
      cout << "Volume: " << package_volume << " Cost: " << total << endl;
    } else if (package_volume > tier1_threshold){
      total = (tier1_threshold * base_cost) + ((package_volume - tier1_threshold) * base_cost * tier1_surcharge);
      cout << "Volume: " << package_volume << " Cost: " << total << endl;
    } else {
      total = package_volume * base_cost;
      cout << "Volume: " << package_volume << " Cost: " << total << endl;
    }
  }
  
  
  return 0;
}
