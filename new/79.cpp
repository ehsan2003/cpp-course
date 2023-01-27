#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char s[100];
  char last;

  cin.getline(s, 100);
  for (int i = 0; s[i] != '\0'; i++) {
    last = s[i];
  }
  cout << last;
  return 0;
}
