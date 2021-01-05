#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vect;
  while (n > 0) {
    vect.push_back(n%2);
    n /= 2;
  }
  int out = 0;
  for (int i = vect.size(); i > 0; i--) {
    out += vect[i - 1] * pow(2,vect.size() - i);
  }
  cout << out << endl;
}
