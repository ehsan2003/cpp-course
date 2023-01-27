#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char s[100];
  int digits = 0;
  int lower_case = 0;
  int upperr_case = 0;
  cin.getline(s, 100);
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      lower_case++;
    }
    if (s[i] >= 'A' && s[i] <= 'Z') {
      upperr_case++;
    }
    if (s[i] >= '0' && s[i] <= '9') {
      digits++;
    }
  }
  cout << "lower_case : " << lower_case << endl;
  cout << "upperr_case : " << upperr_case << endl;
  cout << "digits : " << digits << endl;
  return 0;
}
