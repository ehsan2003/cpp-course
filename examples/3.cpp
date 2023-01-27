#include <iostream>
using namespace std;
int main() {
  int n = 5;
  float x;
  cin >> x;

  float min = x;
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (min > x) {
      min = x;
    }
  }

  cout << min;

  return 0;
}
