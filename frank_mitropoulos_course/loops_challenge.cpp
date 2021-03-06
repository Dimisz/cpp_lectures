#include <iostream>
#include <vector>

using namespace std;

vector<int> vec {};

void print_nums(vector<int> vec){
  cout << "[ ";
  for(auto i : vec){
    cout << i << " ";
  }
  cout << "]" << endl;
}

int main(){
  
  bool running{true};
  string choice{};
  
  do {
    
    cout << "-----------------"<< endl;
    cout << "Options: " << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest numbers" << endl;
    cout << "L - Display the largest numbers" << endl;
    cout << "Q - Quit\n" << endl;
    
    cout << "Enter your choice: " << endl;
    cin >> choice;
    
    
    
    if (choice == "P" || choice == "p"){
        print_nums(vec);
    }
    else if (choice == "A" || choice == "a"){
        int num{};
        cout << "Enter a number to append: ";
        cin >> num;
        vec.push_back(num);
        cout << "Number appended";
    }
    else if (choice == "M" || choice == "m"){
        if (vec.size() > 0){
          int sum {};
          double mean{};
          for (auto i : vec){
            sum += i;
          }
          mean = (double)sum / vec.size();
          cout << "Average of the numbers in the list is: " << mean << endl;
        }
        else {
          cout << "The list is empty" << endl;
        }
    }
    else if (choice == "S" || choice == "s"){
        int min_element = vec.at(0);
        // solved as a loop as part of the challenge
        for (auto i : vec){
          if(i < min_element){
            min_element = i;
          }
        }
        cout << "The smallest element in the list is: " << min_element << endl;
    }
    else if (choice == "L"  || choice == "l"){
        int max_element = vec.at(0);
        for (auto i : vec){
          if(i > max_element){
            max_element = i;
          }
        }
        cout << "The largest element in the list is: " << max_element << endl;
    }
    else if (choice == "Q"  || choice == "q"){
        cout << "Goodbye!" << endl;
        running = false;
    }
    else{
        cout << "Unknown selection, please try again" << endl;
    }
  } while(choice != "q" && choice != "Q");
  
  return 0;
}
