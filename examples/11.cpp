#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char s[100];
  cin.getline(s, 100);
  int length = strlen(s);
  for (int i = length - 1; i >= 0; i--) {
    cout << s[i];
  }
  return 0;
}
