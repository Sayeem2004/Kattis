#include <iostream>
#include <cmath>

int main() {
  int n, out = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int q, c, e;
    std::cin >> q;
    c = q % 10;
    e = floor(q / 10);
    out = out + pow(e, c);
  }
  std::cout << out;
}
