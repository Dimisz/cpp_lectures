#include <iostream>
#include <sstream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <iomanip> //fixed format of nums

using namespace std;

class Date {
public:
  Date(int year, int month, int day)
  {
    if (month < 1 || month > 12)
    {
      throw out_of_range("Month value is invalid: " + to_string(month));
    }
    else if (day < 1 || day > 31)
    {
      throw out_of_range("Day value is invalid: " + to_string(day));

    }
    this->year = year;
    this->month = month;
    this->day = day;
  }
  int GetYear() const
  {
    return year;
  }
  int GetMonth() const
  {
    return month;
  }
  int GetDay() const
  {
    return day;
  }
  
  
private:
  int year;
  int month;
  int day;
};


//bool PrepareDate(int year, int month, int day)
//{
//  bool date_legit = false;
//
//  if (month > 0 && month <= 12)
//  {
//    if (day > 0 && day <= 31)
//    {
//      date_legit = true;
//    }
//    else
//    {
//      cout << "Day value is invalid: " << day << endl;
//    }
//  }
//  else
//  {
//    cout << "Month value is invalid: " << month << endl;
//  }
//  return date_legit;
//}


bool operator<(const Date& lhs, const Date& rhs)
{
  if(lhs.GetYear() == rhs.GetYear())
  {
    if(lhs.GetMonth() == rhs.GetMonth())
    {
      return lhs.GetDay() < rhs.GetDay();
    }
    return lhs.GetMonth() < rhs.GetMonth();
  }
  return lhs.GetYear() < rhs.GetYear();
}

class Database {
public:
  void AddEvent(const Date& date, const string& event)
  {
    db[date].insert(event);
  }
  //bool changed to void
  bool DeleteEvent(const Date& date, const string& event)
  {
    if (event.empty())
    {
      cout << "Deleted " << DeleteDate(date) << " events" << endl;
      return true;
    }
    else
    {
      if(db[date].erase(event))
      {
        cout << "Deleted successfully" << endl;
        return true;
      }
      else{
        cout << "Event not found" << endl;
        return false;
      }
    }
  }
  
  int  DeleteDate(const Date& date)
  {
    int num_events = db.at(date).size();
    db.erase(date);
    return num_events;
  }

  void Find(const Date& date) const
  {
    if (db.count(date) > 0)
    {
      //cout << "found" << endl;
      //cout << db[date].at(0);
      for (string i : db.at(date))
      {
        cout << i << endl;
      }
    }
  }
  
  void Print() const
  {
    //cout << "Size = " << db.size() << endl;
    for (auto item : db){
      cout << setw(4);
      cout << setfill('0');
      cout << right;
      cout << item.first.GetYear() << "-";
      cout << setw(2);
      cout << setfill('0');
      cout << right;
      cout << item.first.GetMonth() << "-";
      cout << setw(2);
      cout << setfill('0');
      cout << right;
      cout << item.first.GetDay() << " ";
      
      for (auto x : item.second){
        cout << x << " ";
      }
      cout << endl;
    }
  }
private:
  map<Date, set<string>> db;
};

int main() {
  try
  {
  
      Database db;
        
      string command;
      while (getline(cin, command)) {
        
       
        istringstream iss(command);
        string operation;
        if(iss >> operation)
        {
          //cout << "Operation: " << operation << endl;
          if (operation == "Print")
          {
            db.Print();
          }
          else
          {
            string date;
            iss >> date;
            //VALIDATING DATE
            //IF VALIDATED -> PROCEED
            istringstream date_stream(date);
            int year, month, day;
            if (date_stream >> year)
            {
              date_stream.ignore(1);
              if(date_stream >> month)
              {
                date_stream.ignore(1);
                if((date_stream >> day))
                {
                  //Date validated
                  //Procceed to operations
                  //cout << boolalpha << PrepareDate(year, month, day) << endl;
                  string event;
                  iss >> event;
                  if (operation == "Add")
                  {
    //                if(PrepareDate(year, month, day))
    //                {
                      Date d(year, month, day);
                      db.AddEvent(d, event);
    //                }
                  }
                  else if (operation == "Del")
                  {
    //                if(PrepareDate(year, month, day))
    //                {
                      Date d(year, month, day);
                      db.DeleteEvent(d, event);
    //                }
                  }
                  else if (operation == "Find")
                  {
    //                if(PrepareDate(year, month, day))
    //                {
                      Date d(year, month, day);
                      db.Find(d);
    //                }
                  }
                  else
                  {
                    throw logic_error("Unknown command: " + operation);
                  }
                }
                else
                {
                  throw logic_error("Wrong date format: " + date);
                }
              }
              else
              {
                throw logic_error("Wrong date format: " + date);
              }
            }
            else
            {
              throw logic_error("Wrong date format: " + date);
            }//end of date validation
          }
        }


      }

      return 0;
  }
  catch(exception& e)
  {
    cout << e.what() << endl;
    return 0;
  }
}
