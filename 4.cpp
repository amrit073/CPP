// Write a program overloading function sort() to sort an array of integers,
// characters as well as floating point numbers
#include <iostream>
using namespace std;

void sort(int *arr) {
  int i, j, temp;
  for (i = 0; i < 5; i++) {
    for (j = i; j < 5; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    cout << arr[i] << " ";
  }
  cout << endl;
}

void sort(char *arr) {
  int i, j;
  char temp;
  for (i = 0; i < 5; i++) {
    for (j = i; j < 5; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    cout << arr[i] << " ";
  }
  cout << endl;
}
void sort(float *arr) {
  int i, j;
  float temp;
  for (i = 0; i < 5; i++) {
    for (j = i; j < 5; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr1[5] = {2, 3, 4, 1, 6};
  char arr2[5] = {'e', 'r', 'g', 's', 'n'};
  float arr3[5] = {1.2, 3.4, 6.3, 7.4, 3.3};
  sort(arr1);
  sort(arr2);
  sort(arr3);
}
