#include <iostream>
using namespace std;
int main() {
  char arr[5] = {'a','b','c','d','e'};
  int itr;
  for(itr = 0; itr < 5; itr++) {
      cout << arr[itr];
  }
  cout << endl;
  return 0;
}