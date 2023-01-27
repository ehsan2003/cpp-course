#include <iostream>

using namespace std;

int main() {
  int m, n;
  if (m > n) {
    int temp = m;
    m = n;
    n = temp;
  }
  for (int i = m + 1; i < n; i++) {
    if (i % 2 == 0) {
      cout << i << endl;
    }
  }

  return 0;
}
