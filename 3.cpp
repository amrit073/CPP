//Write a program to get input a string and print the string and its reverse. Define your own function to reverse the string in your program.
#include "iostream"
using namespace std;

char* reverse(char *word) {
  int i = 0,j=0;
  cout << "reverse string is: "; 
  while (word[i] != '\0') {
    i++;
  }
  
  char *temp;
  do {
    temp[j++] = word[--i];
  } while (i != 0);
  return temp;
}

int main() {
  char word[10];
  cout << "enter a string toreverse " ;
  cin >> word;
  cout << "entered string is : "<<word<< endl;
  cout << reverse(word) << endl;
}
