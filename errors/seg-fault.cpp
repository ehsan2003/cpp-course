
#include <iostream>
using namespace std;
int main() {
  int a[10]={};
  a[10000] = 100; // out of bound access is ub
                // the best case here is that we face a seg fault
                // and in worst case we have buffer overflow vulenrability

  cout << a[10000];
  return 0;
}
