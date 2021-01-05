#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int s1, deg;
  cin >> s1 >> deg;
  double length = s1 / sin(deg * 3.14159265358979 / 180);
  length = ceil(length);
  int out = (int) length;
  cout << out << endl;
}
