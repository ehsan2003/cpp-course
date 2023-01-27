#include <iostream>

using namespace std;
int main() {
  int a, b, gcf;

  cin >> a;
  cin >> b;

  for (int i = a; i >= 1; i--) {
    if (a % i == 0 && b % i == 0) {
      gcf = i;
      break;
    }
  }
  cout << "Greatest common factor :" << gcf << endl;
  int lcm;
  for (int i = a; i <= a * b; i++) {
    if (i % a == 0 && i % b == 0) {
      lcm = i;
      break;
    }
  }
  cout << "Least common Multiple :" << lcm << endl;

  cout << "Least common Multiple (method 2):" << a * b / gcf << endl;
  return 0;
}
