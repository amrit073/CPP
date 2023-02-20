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
private:
  int hour, min, sec;

public:
  void set() {
    cout << "enter time in hour , min and sec: ";
    cin >> hour >> min >> sec;
  };
  void print() {
    cout << " hour: " << hour << " min: " << min << " sec: " << sec << endl;
  };

  friend Time addTime(Time, Time);
  friend Time addTime(Time *, Time *);
  friend Time addTimeByRef(Time &, Time &);
};

Time addTime(Time t1, Time t2) {
  int totalsec =
      (t1.hour + t2.hour) * 60 * 60 + (t1.min + t2.min) * 60 + t1.sec + t2.sec;
  Time result;
  result.hour = totalsec / (60 * 60);
  result.min = (totalsec - result.hour * 60 * 60) / 60;
  result.sec = totalsec - result.hour * 60 * 60 - result.min * 60;
  return result;
}

Time addTime(Time *t1, Time *t2) {
  int totalsec = (t1->hour + t2->hour) * 60 * 60 + (t1->min + t2->min) * 60 +
                 t1->sec + t2->sec;
  Time result;
  result.hour = totalsec / (60 * 60);
  result.min = (totalsec - result.hour * 60 * 60) / 60;
  result.sec = totalsec - result.hour * 60 * 60 - result.min * 60;
  return result;
}

Time addTimeByRef(Time &t1, Time &t2) {
  int totalsec =
      (t1.hour + t2.hour) * 60 * 60 + (t1.min + t2.min) * 60 + t1.sec + t2.sec;
  Time result;
  result.hour = totalsec / (60 * 60);
  result.min = (totalsec - result.hour * 60 * 60) / 60;
  result.sec = totalsec - result.hour * 60 * 60 - result.min * 60;
  return result;
}

int main() {
  Time t1, t2, t3;
  t1.set();
  t2.set();
  // by value
  t3 = addTime(t1, t2);
  t3.print();
  // by address
  t3 = addTime(&t1, &t2);
  t3.print();
  // by reference
  t3 = addTimeByRef(t1, t2);
  t3.print();
  return 0;
}
