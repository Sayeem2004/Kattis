#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n;
  double l, w;
  cin >> n >> l >> w;
  double max = sqrt(l * l + w * w);
  for (int i = 0; i < n; i++) {
    int size;
    cin >> size;
    if (size <= max) {
      cout << "DA" << endl;
    } else {
      cout << "NE" << endl;
    }
  }
}
