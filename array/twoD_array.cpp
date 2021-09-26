#include <iostream>
using namespace std;
int main() {
  int arr[5][5];
  int itr, itr2;
  for(itr = 0; itr < 5; itr++) {
      for(itr2 = 0; itr2 < 5; itr2++) {
          arr[itr][itr2] = itr * itr2;
      }
  }
  for(itr = 0; itr < 5; itr++) {
      for(itr2 = 0; itr2 < 5; itr2++) {
          cout << arr[itr][itr2] << " ";
      }
      cout << endl;
  }
  return 0;
}