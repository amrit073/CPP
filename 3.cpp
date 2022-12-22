#include "iostream"
#include "string.h"
using namespace std;

void reverse(char *myname) {
  int i = 0;
  while (myname[i] != '\0') {
    i++;
  }
  char *temp;
  do {
    cout << myname[--i];
  }while (i != 0);
  cout << endl;
}

int main() {
  char name[10];
  cout << "enter a string toreverse" << endl;
  cin >> name;
  reverse(name);
}
