#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int t = n;
  int p = 0;
  while (n > 0) {
    int r = n % 10;
    p = p * 10 + r;
    n = n / 10;
  }
  if (p == t) {
    cout << "motegharen" << endl;
  } else {
    cout << "namotegharen" << endl;
  }
  return 0;
}
