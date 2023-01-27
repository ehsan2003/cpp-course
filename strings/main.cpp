#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char s[200];
  char d[200];

  cin.getline(s, 200);
  cin.getline(d, 200);

  cout << strcmp(s, d);
}
