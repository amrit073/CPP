//Write a program to get input a string and print the string and its reverse. Define your own function to reverse the string in your program.
#include "iostream"
using namespace std;

void reverse(char *myname) {
  int i = 0;
  cout << "reverse string is: "; 
  while (myname[i] != '\0') {
    i++;
  }
  char *temp;
  do {
    cout << myname[--i];
  } while (i != 0);
  cout << endl;
}

int main() {
  char name[10];
  cout << "enter a string toreverse" << endl;
  cin >> name;
  cout << "entered string is : "<< name << endl;
  reverse(name);
}
