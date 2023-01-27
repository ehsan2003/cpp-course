#include <iostream>
using namespace std;

int main() {
  float a, b, c;
  cin >> a >> b >> c;
  if (a > b + c || b > c + a || c > b + a) {
    cout << "mosalas nist " << endl;
  } else if (a == b && b == c) {
    cout << "motesavi al azla" << endl;
  } else if (a == b || b == c || c == a) {
    cout << "motesavi ol saghein" << endl;
  } else {
    cout << "mokhtalef ol azla" << endl;
  }

  return 0;
}
