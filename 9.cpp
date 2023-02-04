// 9. Write a program to increment the Time object of class Time with data
// member hour, min and
//    sec by 1 second using operator overloading for increment ++ in
//    pre-increment and post- increment form. Display the value of time before
//    and after increment.

#include <iostream>
using namespace std;

class Time {
private:
  int hour, minute, second;

public:
  Time(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }
  void print() {
    cout << hour << " hour " << minute << " minutes " << second << " second "
         << endl;
  }
  // pre-increment , changes data and returns changed data;
  Time operator++() {
    if (++second >= 60) {
      second = second % 60;
      minute++;
    }
    if (minute >= 60) {
      minute = minute % 60;
      hour++;
    }
    return *this;
  }
  // post-increment , changes data and returns unchanged data;
  Time operator++(int) {
    // to store unchanged data so we can return data as it was;
    Time temp = *this;
    // change data;
    if (++second >= 60) {
      second = second % 60;
      minute++;
    }
    if (minute >= 60) {
      minute = minute % 60;
      hour++;
    }
    // return  unchanged data we assigned before changing;
    return temp;
  }
};

int main() {
  Time t(1, 2, 3);
  // print initial dara
  t.print(); // = 1hr2min3sec
  // pre-increment data and print returned value
  (++t).print(); // = 1hr2min4sec
  // post-increment data and print returned value
  (t++).print(); // = 1hr2min4sec
  // print final data
  t.print(); // = 1hr2min5sec
}
