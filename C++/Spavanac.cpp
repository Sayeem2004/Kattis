#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int total = a * 60 + b;
  total -= 45;
  if (total > 0) {
    total = total;
  } else {
    total += 1440;
  }
  int out1 = total / 60;
  int out2 = total % 60;
  cout << out1 << " " << out2 << endl;
}
