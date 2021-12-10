#include <iostream>
#include <string>

using namespace std;

void MakePyramid(string s){
  
  if (s.length() == 1){
    cout << s << endl;
  }
  else if (s.length() > 1){
    for (int i = 0; i < s.length(); i++){
      int preceeding_spaces = s.length()-i;
      for (int ps = 1; ps < preceeding_spaces; ps++){
        cout << " ";
      }
      //print forwards
      for (int j = 0; j < i; j++){
        cout << s.at(j);
      }
      //print backwards
      for (int k = i; k >= 0; k--){
        cout << s.at(k);
      }
      int trailing_spaces = s.length()-i;
      for (int ts = 1; ts < trailing_spaces; ts++){
        cout << " ";
      }
      cout << endl;
    }
  }
}

int main(){
  string user_input;
  cout << "Enter your string: " << endl;
  cin >> user_input;
  MakePyramid(user_input);
  
  return 0;
}
