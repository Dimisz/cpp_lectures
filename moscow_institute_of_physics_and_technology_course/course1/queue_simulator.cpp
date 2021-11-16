// simulates people in a queue
// people can only leave/come to the end of the queue

// INPUTS:
// Q - number of operations
// Operations:
// WORRY i - person number i start worrying
// QUIET i - perrson num i calms down
// COME k - k people joined the end of the queue
// COME -k - k people left the queue
// WORRY_COUNT - how many people in the queue worry


#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){
  int Q;
  cin >> Q;
  
  vector<int> queue;
  
  while(Q > 0){
  // take inputs
    string to_do;
    int n;
    cin >> to_do;
    if (cin.peek() != '\n'){ // check if second argument given
      cin >> n;
    }
    
    if (to_do == "COME"){
      if (n >= 0){
        for (int i = 0; i < n; ++i){
          queue.push_back(0);
        }
      }
      else if (n < 0){
        for (int i = n; i < 0; ++i){
          queue.pop_back();
        }
      }
    }
    
    if (to_do == "WORRY"){
      queue[n] = 1;
    }
    
    if (to_do == "QUIET"){
      queue[n] = 0;
    }
    
    if (to_do == "WORRY_COUNT"){
      int count = 0;
      for (auto i : queue){
        if (i == 1){
          count += 1;
        }
      }
      cout << count << endl;
    }
    
    
//    cout << "=====================" << endl;
//    cout << to_do << " n: " << n << endl;
//    for (auto i : queue){
//      cout << i << " ";
//    }
//    cout << "\n======================" << endl;
    --Q;
  }
  
  
  return 0;
}

