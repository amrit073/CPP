// 8. Write a program defining the class Distance with data member feet and inch
// as integer.
//    Overload the constructors along with copy constructor. Use the member
//    functions for input and output as well as to compute the sum of the two
//    objects and return the sum. Show read/write operations in main() using
//    above information.
#include <iostream>
using namespace std;
class Distance {
  int f, i;

public:
  Distance() {}

  void input() {
    cout << "enter feet and inch ";
    cin >> f >> i;
  }

  void print() { cout << "value is  " << f << " ft " << i << " inch \n"; }

  Distance add(Distance d2) {
    Distance result;
    int totalinch = (d2.f + f) * 12 + d2.i + i;
    result.f = totalinch / 12;
    result.i = totalinch - result.f * 12;
    return result;
  }
};

int main() {
  Distance d1, d2;
  d1.input();
  d1.print();
  d2.input();
  d2.print();
  Distance result = d1.add(d2);
  cout << "total ";
  result.print();
}
