#include <iostream>
using namespace std;
void print_array(int arr[], int size) {
    int itr;
    for(itr = 0; itr < size; itr++) {
        cout << arr[itr];
        arr[itr]++;
    }
}
int main() {
  int arr[5];
  int itr;
  for(itr = 0; itr < 5; itr++) {
      arr[itr] = itr + 1;
  }
  print_array(arr, 5);
  cout << endl;
  for(itr = 0; itr < 5; itr++) {
      cout << arr[itr];
  }
  cout << endl;
  return 0;
}