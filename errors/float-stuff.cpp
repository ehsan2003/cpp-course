#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  // float a = float(5) / 0;
  // cout << "float(1) / 0 = " << a << endl;
  // float n = a - a;
  // cout << "(n>0) =" << (n + 10) << endl;
  // cout << "n + 10 \t\t= " << n + 10 << endl;
  // cout << "(n > 10) \t= " << (n > 10) << endl;
  // cout << "(n == n) \t= " << (n == n) << endl;
  // cout << "n \t\t= " << n << endl;
  cout << "0.1+0.1+0.1\t= " << fixed << setprecision(20) << float(0.3);

  cout << (abs(double(0.1) + double(0.1) + double(0.1) - double(0.3)) <
           0.00001);
  return 0;
}
