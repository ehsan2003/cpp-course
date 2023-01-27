#include <iostream>

using namespace std;

int main() {
  int n;
  int sum = 0;
  cout << "enter n : ";
  cin >> n;
  while (n > 0) {
    int r = n % 10;
    n = n / 10;
    if (r % 2 == 1) {
      sum = sum + r;
    }
  }
  cout << sum << endl;
  return 0;
}
