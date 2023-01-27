#include <iostream>
#include <math.h>
using namespace std;
int main() {
  float a, b, c;
  cin >> a >> b >> c;
  float delta = b * b - 4 * a * c;
  if (delta > 0) {
    float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);
    cout << "x1,x2 = " << x1 << "," << x2;
  } else if (delta == 0) {
    cout << "x = " << -b / 2 * a << endl;
  } else {
    cout << "no answer !" << endl;
  }
  return 0;
}
