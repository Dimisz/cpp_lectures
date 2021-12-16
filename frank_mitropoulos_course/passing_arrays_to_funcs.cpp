#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);
//void print_array_no_size(int arr[]);

void print_array(const int arr[], size_t size){ // const
  for (size_t i{0}; i < size; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
}

//AVOID
//void print_array_no_size(int arr[]){
//  for (int i {0}; i < (sizeof(arr)/sizeof(arr[0])); i++){
//    cout << arr[i] << " ";
//  }
//  cout << endl;
//}

//set each array element to value
void set_array(int arr[], size_t size, int value){
  for (size_t i{0}; i < size; ++i){
    arr[i] = value;
  }
}


int main(){
  int my_scores[] {100, 98, 90, 86, 84};
  
  print_array(my_scores, 5);
 
  
  //WORKS IMPLICITLY
  // BUT SHOULDN'T WRAP INTO FUNCTION
  // COZ COMPILERR DOESN'T SEE THE SIZE OF AN ABSTRACT ARRAY
  
//  for (int i {0}; i < (sizeof(my_scores)/sizeof(my_scores[0])); i++){
//    cout << my_scores[i] << " ";
//  }
//  cout << endl;
  
  set_array(my_scores, 5, 100);
  print_array(my_scores, 5);
  
  cout << endl;
  return 0;
}
