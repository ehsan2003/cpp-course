#include <iostream>
using namespace std;
int main() {
  int n = 5;
  float a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  float max = a[0];
  for (int i = 1; i < n; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  float delta = 20 - max;
  for (int i = 0; i < n; i++) {
    a[i] += delta;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }

  return 0;
}
