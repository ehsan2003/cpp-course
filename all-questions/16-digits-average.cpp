
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  int count = 0;
  while (n > 0) {
    int r = n % 10;
    sum += r;
    n = n / 10;
    count++;
  }
  cout << float(sum) / count;
  return 0;
}
