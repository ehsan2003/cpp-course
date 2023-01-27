#include <iostream>

using namespace std;

int main() {
  int n = 5;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n - i; j++) {
      if (a[j] > a[j - 1]) {
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
  }
  cout << a[1] << endl;

  return 0;
}
