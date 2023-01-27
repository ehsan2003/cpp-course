
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float x1, y1, x2, y2;
  cout << "enter first point's coordinates (x,y) : ";
  cin >> x1 >> y1;

  cout << "enter second point's coordinates (x,y) : ";
  cin >> x2 >> y2;
  cout << "distance : " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  return 0;
}
