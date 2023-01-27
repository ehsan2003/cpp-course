#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int s = 0;
  int sign = 1;
  for (int i = 1; i <= n; i++) {
    s += i * sign;
    sign = -sign;
  }
  cout << "s = " << s;
  return 0;
}
