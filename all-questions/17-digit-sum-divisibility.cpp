#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int t = n;
  int sum = 0;
  while (n > 0) {
    int r = n % 10;
    sum += r;
    n = n / 10;
  }
  if (t % sum == 0) {
    cout << "number is divisible by sum of it's digits" << endl;
  } else {
    cout << "number is not divisible by sum of it's digits" << endl;
  }
  return 0;
}
