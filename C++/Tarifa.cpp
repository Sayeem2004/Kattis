#include <iostream>

using namespace std;

int main() {
  int per, n, total = 0;
  cin >> per >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    total += a;
  }
  int out1 = per * (n+1) - total;
  cout << out1 << endl;
}
