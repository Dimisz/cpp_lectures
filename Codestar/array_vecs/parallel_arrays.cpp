#include <iostream>
#include <vector>

using namespace std;

int main()
{
  const int NUM_PERSONS = 5;
  vector<string> names;
  vector<double> weights;
  
  for (int i = 0; i < NUM_PERSONS; i++)
  {
    string name{};
    int weight{};
    cout << "Enter the name of a person: " << endl;
    getline(cin, name);
    names.push_back(name);
    
    cout << "Enter " << name << "'s weight: " << endl;
    cin >> weight;
    cin.get();
    weights.push_back(weight);
  }
  
  for (int i = 0; i < NUM_PERSONS; i++)
  {
    cout << names.at(i) << " weighs " << weights.at(i) << " lbs." << endl;
  }
  
  
  return 0;
}
