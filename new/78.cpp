
#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char s[100];
  char largest_name[100] = "";

  for (int i = 0; i < 5; i++) {
    cin.getline(s, 100);
    if (strlen(s) > strlen(largest_name)) {
      strcpy(largest_name, s);
    }
  }

  cout << largest_name;

  return 0;
}
