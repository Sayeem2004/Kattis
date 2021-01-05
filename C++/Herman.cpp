#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {
  double r;
  cin >> r;
  double pi = 2 * acos(0.0);
  double a1 = pi * r * r;
  double a2 = 2 * r * r;
  cout << fixed << setprecision(6) << a1 << endl;
  cout << fixed << setprecision(6) << a2 << endl;
}
