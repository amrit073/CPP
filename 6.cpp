#include <iostream>
using namespace std;
struct Distance{
  int m;
  int cm;
  void input(){
    cout << "enter distance meter and  centimeter\n";
    cin >> m >> cm;
  }
  Distance add(Distance &d2){
    int totalcm = cm + d2.cm;
    //ternary operator is best thing in c/pp
    int excesscm = (totalcm>=100)?(totalcm-totalcm/100*100):0;
    int totalm = m + d2.m + totalcm/100;
    Distance result;
    result.m = totalm;
    result.cm =(excesscm==0?totalcm:excesscm);
    return result;
  }
};

int main(){
  Distance d1, d2;
  d1.input();
  d2.input();
  Distance result = d1.add(d2);
  cout << "distance  is : " << result.m << " m and " << result.cm << " cm.\n";
}
