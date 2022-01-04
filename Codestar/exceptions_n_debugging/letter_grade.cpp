#include <iostream>
#include <stdexcept>

using namespace std;

char GetLetterGrade(int grade);

int main()
{
  int grade;
  while(cin>>grade)
  {
    try
    {
      char res = GetLetterGrade(grade);
      cout << "Letter grade for " << grade <<" is " << res << endl;
    }
    catch (const out_of_range& er)
    {
      cout << er.what() << endl;
    }
  }
}



char GetLetterGrade(int grade)
{
  char letter_grade;
  
  if(grade < 0 || grade > 100)
  {
    throw out_of_range("Your percent must be within 0 and 100 inclusive");
  }
  else
  {
    if (grade <= 59) return 'F';
    else if (grade <= 69) return 'D';
    else if (grade <= 79) return 'C';
    else if (grade <= 89) return 'B';
    else if (grade <= 100) return 'A';
  }
  return letter_grade;
}
