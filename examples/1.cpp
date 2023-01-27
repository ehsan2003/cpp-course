#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char s[100];
  cin.getline(s, 100);

  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    if (s[i] == 'A') {
      s[i] = 'B';
    }
  }

  return 0;
}
