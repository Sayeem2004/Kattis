#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {
  int r1, r2;
  cin >> r1 >> r2;
  double pi = 2 * acos(0.0);
  double a1 = pi * r1 * r1;
  double a2 = pi * (r1-r2) * (r1-r2);
  double out = a2 / a1 * 100;
  cout << fixed << setprecision(6) << out << endl;
}
