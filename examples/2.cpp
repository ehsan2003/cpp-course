#include <iostream>

using namespace std;
int main() {
  int n = 5;
  float max = 0;

  for (int i = 0; i < n; i++) {
    float x;
    cin >> x;
    if (x < 12) {
      if (max < x) {
        max = x;
      }
    }
  }

  if (max < 12) {
    cout << max;
  } else {
    cout << "mashroot nadarim";
  }

  return 0;
}
