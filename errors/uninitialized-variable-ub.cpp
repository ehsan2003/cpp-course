
#include <iostream>
using namespace std;
int main() {
  int i = 0;
  int a[10];
  cout << i; // at this point i is uninitialized and thus we have an undefined
             // behavior for the value of i
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  cout << a[i];
  return 0;
}
