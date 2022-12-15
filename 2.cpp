// Write a Program defining an inline function to compute the area of circle
// with radius as input.

#include <iostream>
using namespace std;

inline int area(int r) { return 22 / 7 * r * r; }

int main() {
  int r;
  cout << "enter radius of circle" << endl;
  cin >> r;
  cout << "area is : " << area(r) << endl;
  return 0;
}
