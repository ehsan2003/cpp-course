#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int multiple = 1;
  while (n > 0) {
    int r = n % 10;
    if (r != 0) {
      multiple = multiple * r;
    }
    n = n / 10;
  }
  return 0;
}
