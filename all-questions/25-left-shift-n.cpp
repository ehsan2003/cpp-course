#include <iostream>

using namespace std;
int main() {
  int q;
  cout << "enter amount of shifts : ";
  cin >> q;
  int n;
  cout << "enter length of the array : ";
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cout << " enter a[" << i << "] = ";
    cin >> a[i];
  }
  for (int i = 0; i < q; i++) {
    int temp = a[0];
    for (int i = 0; i < n - 1; i++) {
      a[i] = a[i + 1];
    }
    a[n - 1] = temp;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
  return 0;
}
