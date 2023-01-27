#include <iostream>
using namespace std;

int main() {
  int n = 10;
  int a[n];
  for (int i = 0; i < n; i++) {
    cout << "enter a[" << i << "]";
    cin >> a[i];
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << "enter a[" << i << "] = " << a[i];
  }

  return 0;
}
