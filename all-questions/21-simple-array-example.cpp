#include <iostream>

using namespace std;
int main() {
  int a[5];
  for (int i = 0; i < 5; i++) {
    cout << " enter a[" << i << "] = ";
    cin >> a[i];
  }
  for (int i = 0; i < 5; i++) {
    cout << a[i] << endl;
  }
  return 0;
}
