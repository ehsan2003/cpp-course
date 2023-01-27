
#include <iostream>
using namespace std;

int main() {
  {
      // float a = 10.5;
      // int b = a;
      // cout << b;
  }

  {
      // int a = 10;
      // int b = 3;
      // cout << a / float(b) << endl; // 3.333333
      // cout << a / b << endl;        // 3
  }

  {
    char a = 4;
    int  b  = 300;
    a = b;
    cout << int(a);
  }

  return 0;
}
