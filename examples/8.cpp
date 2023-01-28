#include <iostream>
using namespace std;
int main() {
  char s[100];
  cin.getline(s, 100);
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] != 'A' && s[i] != 'a' && s[i] != 'U' && s[i] != 'u' &&
        s[i] != 'O' && s[i] != 'o' && s[i] != 'e' && s[i] != 'E') {
      cout << s[i];
    }
  }

  return 0;
}
