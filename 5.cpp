// 5. Write a program using dynamic memory allocation to get input an array of
// numbers and find
//    the sum of N numbers stored in the array using a function to compute the
//    sum.
#include <iostream>
using namespace std;

int sum(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}
// or
int sum2(int *arr, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int x, n;
  cout << "enter size of array" << endl;
  cin >> n;
  int *arr = new int[n];
  cout << "enter elements of array" << endl;
  for (x = 0; x < n; x++) {
    cin >> arr[x];
  }
  cout << "the sum of elements is : " << sum(arr, n) << endl;
  delete[] arr; // good habit to free the memory after use :)
  return 0;
}
