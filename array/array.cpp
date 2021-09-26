#include <iostream>
using namespace std;
int main() {
  int arr[4];
  int itr;
  for(itr = 0; itr < 5; itr++) {
      arr[itr] = itr + 1;
  }
  for(itr = 0; itr < 5; itr++) {
      cout << arr[itr];
  }
  cout << endl;
  return 0;
}