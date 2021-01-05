#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  reverse(a.begin(),a.end());
  reverse(b.begin(),b.end());
  int a3 = stoi(a);
  int b3 = stoi(b);
  int out = max(a3,b3);
  cout << out << endl;
}
