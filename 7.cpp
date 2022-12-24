// 7. Write program with objects as function argument by passing by value,
// passing by address and
//    passing by reference defining a class Time with data member hour, minute,
//    second as integers. Write member functions to read the data for objects
//    and to show the value of objects of Time. Define a friend function
//    addtime() with objects as arguments and return the sum of two objects.
//    Show the values of each object and their sum as output.

#include <iostream>

using namespace std;

class Time {
  int hour, minute, second;

public:
  void input() {
    cout << "Enter time hour, minutes and second : ";
    cin >> hour >> minute >> second;
  }

  void print() {
    cout << "Entered time is : " << hour << "H " << minute << "M " << second
         << "S \n\n";
  }

  friend Time addtime(Time *t1, Time *t2);
  friend void printtimebyref(Time &), printtimebyval(Time);
};

Time addtime(Time *t1, Time *t2) {
  int totalsec = (t1->hour + t2->hour) * 60 * 60 +
                 (t1->minute + t2->minute) * 60 + t1->second + t2->second;
  Time result;
  result.hour = totalsec / 3600;
  result.minute = (totalsec - result.hour * 3600) / 60;
  result.second = (totalsec - result.minute * 60 - result.hour * 3600);
  return result;
}

void printtimebyref(Time &result) {
  cout << "passed object by reference\n";
  cout << "Total time is : " << result.hour << "H " << result.minute << "M "
       << result.second << "S \n\n";
}

void printtimebyval(Time result) {
  cout << "passed object by value \n";
  cout << "Total time is : " << result.hour << "H " << result.minute << "M "
       << result.second << "S \n\n";
}

int main() {
  Time t1, t2;
  t1.input();
  t1.print();
  t2.input();
  t2.print();
  // pass by address
  Time result = addtime(&t1, &t2);
  // pass by reference
  printtimebyref(result);
  // pass by value
  printtimebyval(result);
}
