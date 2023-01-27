#include <iostream>

using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cout << " enter a[" << i << "] = ";
    cin >> a[i];
  }
  int last_index = a[n - 1];
  for (int i = n - 1; i >= 1; i--) {
    a[i] = a[i - 1];
  }
  a[0] = last_index;
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
  return 0;
}
