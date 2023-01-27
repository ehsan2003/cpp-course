
#include <iostream>

using namespace std;
int main() {
  int a[5];
  for (int i = 0; i < 5; i++) {
    cout << " enter a[" << i << "] = ";
    cin >> a[i];
  }

  int n;
  int index = -1;
  cout << "enter search number : ";
  cin >> n;
  for (int i = 0; i < 5; i++) {
    if (n == a[i]) {
      cout << "found : " << i << endl;
      index = i;
      break;
    }
  }
  if (index == -1) {
    cout << "not found "<<endl;
  }

  return 0;
}
