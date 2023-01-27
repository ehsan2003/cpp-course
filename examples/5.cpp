#include <iostream>

using namespace std;
int main() {
  int n;
  int sign = 1;
  int fact = 1;
  float sum = 0;
  cout << "enter number : ";

  cin >> n;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
    sum = sum + 1 / float(fact) * sign;
    sign = -sign;
  }

  cout << "sum is : " << sum;
  return 0;
}
