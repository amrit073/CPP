// 6. Write a program that uses a structure Distance with data members meter and
// centimeter.
//    Encapsulate the structure with the input and output function as well as
//    the function to add the two variables of Distance and return the sum. Your
//    program should display the result.

#include <iostream>
using namespace std;
struct Distance {
  int m;
  int cm;
  void input() {
    cout << "enter distance meter and  centimeter\n";
    cin >> m >> cm;
  }
  Distance add(Distance &d2) {
    int totalcm = cm + d2.cm + (m + d2.m) * 100;
    Distance result;
    result.m = totalcm / 100;
    result.cm = totalcm - result.m * 100;
    return result;
  }
};

int main() {
  Distance d1, d2;
  d1.input();
  d2.input();
  Distance result = d1.add(d2);
  cout << "distance  is : " << result.m << " m and " << result.cm << " cm.\n";
}
