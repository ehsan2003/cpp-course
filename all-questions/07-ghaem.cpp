#include <iostream>

using namespace std;

int main() {
  float a, b, c;
  cin >> a >> b >> c;
  if (a > b + c || b > a + c || c > b + a) {
    cout << "mosalas nist " << endl;
  } else if (a * a + b * b == c * c) {
    cout << "masahat : " << a * b * 0.5 << endl;
  } else if (b * b + c * c == a * a) {
    cout << "masahat : " << b * c * 0.5 << endl;
  } else if (a * a + c * c == b * b) {
    cout << "masahat : " << a * c * 0.5 << endl;
  } else {
    cout << "mohit : " << a + b + c << endl;
  }
}
