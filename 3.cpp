// Write a program to get input a string and print the string and its reverse.
// Define your own function to reverse the string in your program.
#include "iostream"
using namespace std;

char *reverse(char *word) {
  int len = 0, j = 0;
  char temp;
  cout << "reverse string is: ";
  while (word[len] != '\0') {
    len++;
  }
  int lastindex = len - 1;
  for (j = 0; j <= lastindex / 2; j++) {
    temp = word[lastindex - j];
    word[lastindex - j] = word[j];
    word[j] = temp;
  }
  return word;
}

int main() {
  char word[10];
  cout << "enter a string toreverse ";
  cin >> word;
  cout << "entered string is : " << word << endl;
  cout << reverse(word) << endl;
}
