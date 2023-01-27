#include <iostream>
using namespace std;

int main() {
  int a[10];
  a[a[0]] = 5;
  int c = a[3];

  cout << a;
  
  return 0;
}
