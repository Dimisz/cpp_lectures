// complete the given class

#include <iostream>
#include <vector>

using namespace std;


class SortedStrings {
public:
  void AddString(const string& s) {
    // add strting s to strings_set
    strings_vec.push_back(s);
  }
  
  vector<string> GetSortedStrings() {
    // get all the strings sorted
    sort(begin(strings_vec), end(strings_vec));
    return strings_vec;
  }
  
private:
  vector<string> strings_vec;
};

void PrintSortedStrings(SortedStrings& strings) {
  for (const string& s : strings.GetSortedStrings()) {
    cout << s << " ";
  }
  cout << endl;
}

int main(){
  SortedStrings strings;
    
  strings.AddString("first");
  strings.AddString("third");
  strings.AddString("second");
  PrintSortedStrings(strings);

  strings.AddString("second");
  PrintSortedStrings(strings);
  
  
  
  return 0;
}
