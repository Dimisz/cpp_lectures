#include <iostream>
#include <vector>
using namespace std;

int main(){
  //Declare 2 empty vectors of ints named vector1 and vector2
  vector <int> vector1;
  vector <int> vector2;
  
  //Add 10 and 20 to vector1 using push_back
  vector1.push_back(10);
  vector1.push_back(20);
  
  //Display the elements in vecctor1 using at() and its size
  cout << "Element of vector1 at index 0: " << vector1.at(0) << endl;
  cout << "Element of vector1 at index 1: " << vector1.at(1) << endl;
  cout << "Size of vector1: " << vector1.size() << endl;
  
  //Add 100 and 200 to vector2 using push_back
  vector2.push_back(100);
  vector2.push_back(200);
  
  //Display the elements in vecctor2 using at() and its size
  cout << "Element of vector2 at index 0: " << vector2.at(0) << endl;
  cout << "Element of vector2 at index 1: " << vector2.at(1) << endl;
  cout << "Size of vector2: " << vector2.size() << endl;
  
  //Declare an empty 2D vector called vector_2d
  vector <vector <int>> vector_2d;
  
  //Add vector1 to vector_2d
  vector_2d.push_back(vector1);
  
  //Add vector2 to vector_2d
  vector_2d.push_back(vector2);
  
  //Display elements in vector_2d
  cout << "\nVector_2d:" << endl;
  cout << "Element at index[0][0]: " << vector_2d[0][0] << endl;
  cout << "Element at index[0][1]: " << vector_2d.at(0).at(1) << endl;
  cout << "Element at index[1][0]: " << vector_2d.at(1).at(0) << endl;
  cout << "Element at index[1][1]: " << vector_2d.at(1).at(1) << endl;
  
  // change vector1.at(0) to 1000
  vector1.at(0) = 1000;
  
  //Display the elements of vector_2d
  cout << "\nVector_2d:" << endl;
  cout << "Element at index[0][0]: " << vector_2d[0][0] << endl;
  cout << "Element at index[0][1]: " << vector_2d.at(0).at(1) << endl;
  cout << "Element at index[1][0]: " << vector_2d.at(1).at(0) << endl;
  cout << "Element at index[1][1]: " << vector_2d.at(1).at(1) << endl;
  
  //Display the elements of vector1
  cout << "\nVector1: " << endl;
  cout << "Element of vector1 at index 0: " << vector1.at(0) << endl;
  cout << "Element of vector1 at index 1: " << vector1.at(1) << endl;
  
  
  return 0;
}
