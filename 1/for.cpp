#include <iostream>

using namespace std;

int main() {

  for (int i = 0; 10 == 20; i++) {
    cout << i;
  }

  {
    int i = 0;
    while (1) {
      cout << i << endl;
      i++;
    }
  }

  int i = 0;
  return 0;
}
