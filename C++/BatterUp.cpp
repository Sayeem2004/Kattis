#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;
  double count = 0, total = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a != -1) {
      count += 1;
      total += a;
    }
  }
  double out = total / count;
  cout << fixed << setprecision(6) << out << endl;
}
