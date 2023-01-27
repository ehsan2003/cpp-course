#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char s[100] = "Hello";

  cin.getline(s, 100);
  char c;
  cin >> c;
  int count = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == c) {
      count++;
    }
  }
  cout << count;

  return 0;
}
