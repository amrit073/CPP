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
  Time operator+() {
    second++;
    if (second >= 60) {
      second = second % 60;
      minute++;
    }
    if (minute >= 60) {
      minute = minute % 60;
      hour++;
    }
  }
};

int main() {}
