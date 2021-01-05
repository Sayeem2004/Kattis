#include <iostream>

int main() {
  std::string e;
  int a = 0, b = 0, c = 0, d = 0;
  std::cin >> e;
  for (int i = 0; i < e.size(); i++) {
    if ((int)e[i] == 95) {
      a ++;
    } else if ((int)e[i] > 96 && (int)e[i] < 123) {
      b ++;
    } else if ((int)e[i] > 64 && (int)e[i] < 91) {
      c ++;
    } else {
      d ++;
    }
  }
  float a2 = a / e.size();
  float b2 = b / e.size();
  float c2 = c / e.size();
  float d2 = d / e.size();
  std::cout << a2 << "\n";
  std::cout << b2 << "\n";
  std::cout << c2 << "\n";
  std::cout << d2;
}
