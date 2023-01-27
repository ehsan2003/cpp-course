#include <cstdio>
#include <cstring>
#include <iostream>
#include <stdio.h>
using std::cout;

using namespace std;

int main() {

  char input[8];
  char password[8];

  strcpy(password, "rictro");
  cout << "Enter password: ";
  cin >> input;

  // Debug prints:
  cout << "Address of input: " <<(long long) &input << "\n";
  cout << "Address of password: " << (long long) &password << "\n";
  cout << "Input: " << input << "\n";
  cout << "Password: " << password << "\n";

  if (strncmp(password, input, 8) == 0)
    cout << "Access granted\n";
  else
    cout << "Access denied\n";

  return 0;
}
