#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter number : ";
  cin >> n;
  int divisors_count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      divisors_count++;
    }
  }
  if (divisors_count == 2) {
    cout << "number is prime" << endl;
  } else {
    cout << "number is not prime";
  }
  return 0;
}
