// write a to-do list for a month
// takes the followign inputs:
// ADD i s - add event 's' to day 'i' of the current month
// DUMP i - print out all the event scheduled for day i
// NEXT - move to a list for next month:
//        all the events are copied from the old list
//        after the events copied the old list is dropped
//     Manage different number of days:
//        - if next month has more days:
//              additional days are left blank (no events)
//        - if next month has less days:
//              all the events from 'extra' days are moved
//              to the last day of a new month

// initial month is January
// February always have 28 days

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;
vector<vector<string>> make_a_month(int days){
  
  vector<vector<string>> month(days);
  //cout << month.size();
  
  return month;
}

void Dump(int i, vector<vector<string>>& current_month){
  int index = i - 1;
  cout << current_month[index].size() << " ";
  for (auto event : current_month[index]){
    cout << event << " ";
  }
  cout << endl;
}

void Add (int i, string s, vector<vector<string>>& current_month){
  int index = i - 1;
  current_month[index].push_back({s});
}


void Next (vector<vector<string>>& current_month, int days){
  if (current_month.size() <= days){
    current_month.resize(days);
  }
  else{
    vector<string> temp;
    
    for(int i = days; i < current_month.size(); ++i){
      for(auto event : current_month[i]){
        temp.push_back(event);
      }
    }
    current_month.resize(days);
    int last_elt_index = current_month.size()-1;
    for (auto i: temp){
      current_month[last_elt_index].push_back(i);
    }
  }
}

int main(){
  int days_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int month_count = 0;
  vector<vector<string>> v = make_a_month(days_in_months[month_count]);
  
  int q; //how many operations to expect
  cin >> q;
  
  while(q > 0){
    string operation;
    cin >> operation;
    
    if (operation == "NEXT"){
      ++month_count;
      int num_days = days_in_months[month_count % 12]; //avoid overflow over 12
      Next(v, num_days);
    }
    else if (operation == "ADD"){
      int ind;
      string event;
      cin >> ind >> event;
      Add(ind, event, v);
    }
    else if (operation == "DUMP"){
      int ind;
      cin >> ind;
      Dump(ind, v);
    }
    
    --q;
  }
  

  
  return 0;
}


//INSTRUCTOR'S SOLLUTION
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//// глобальные (доступные во всей программе) константы
//// часто принято называть ЗАГЛАВНЫМИ_БУКВАМИ
//const vector<int> MONTH_LENGTHS =
//  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//const int MONTH_COUNT = MONTH_LENGTHS.size();
//
//int main() {
//  int q;
//  cin >> q;
//  
//  // номер текущего месяца (от 0 до 11)
//  int month = 0;
//  
//  // внешний вектор должен иметь длину, равную количеству дней в первом месяце;
//  // все внутренние векторы по умолчанию пусты, потому что дел изначально нет
//  vector<vector<string>> days_concerns(MONTH_LENGTHS[month]);
//
//  for (int i = 0; i < q; ++i) {
//    string operation_code;
//    cin >> operation_code;
//
//    if (operation_code == "ADD") {
//
//      int day;
//      string concern;
//      cin >> day >> concern;
//      --day;  // элементы вектора нумеруются с нуля
//      days_concerns[day].push_back(concern);
//
//    } else if (operation_code == "NEXT") {
//
//      // перед переходом к следующему месяцу запомним длину предыдущего
//      // обьявляем эту переменную константной, потому что менять её не планируем
//      const int old_month_length = MONTH_LENGTHS[month];
//      
//      // номер месяца должен увеличиться на 1, но после декабря идёт январь:
//      // например, (5 + 1) % 12 = 6, но (11 + 1) % 12 = 0
//      month = (month + 1) % MONTH_COUNT;
//      
//      const int new_month_length = MONTH_LENGTHS[month];
//      
//      // если новый месяц больше предыдущего, достаточно сделать resize;
//      // иначе перед resize надо переместить дела с «лишних» последних дней
//      if (new_month_length < old_month_length) {
//        
//        // далее понадобится добавлять новые дела в последний день нового месяца
//        // чтобы не писать несколько раз days_concerns[new_month_length - 1],
//        // создадим ссылку с более коротким названием для этого вектора
//        vector<string>& last_day_concerns = days_concerns[new_month_length - 1];
//        
//        // перебираем все «лишние» дни в конце месяца
//        for (int day = new_month_length; day < old_month_length; ++day) {
//          // копируем вектор days_concerns[day]
//          // в конец вектора last_day_concerns
//          last_day_concerns.insert(
//              end(last_day_concerns),
//              begin(days_concerns[day]), end(days_concerns[day]));
//        }
//      }
//      days_concerns.resize(new_month_length);
//
//    } else if (operation_code == "DUMP") {
//
//      int day;
//      cin >> day;
//      --day;
//      
//      // выводим список дел в конкретный день в нужном формате
//      cout << days_concerns[day].size() << " ";
//      for (const string& concern : days_concerns[day]) {
//        cout << concern << " ";
//      }
//      cout << endl;
//
//    }
//  }
//
//  return 0;
//}
//
