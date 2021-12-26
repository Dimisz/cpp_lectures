#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main()
{
  vector<int> my_nums;
  
  try
  {
    my_nums.resize(my_nums.max_size()+1);
    cout << "Executed successfully" << endl;
  }
  catch(const length_error & err)
  {
    cerr << err.what() << endl;
    
  }
  
  
  cout << "Yay it's a big vector" << endl;
  return 0;
}
