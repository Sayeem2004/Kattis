#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >>c;
  for (int i = 1; i <= c; i++ ) {
    if (i%a == 0 && i%b == 0) {
      std::cout << "FizzBuzz\n";
    } else if (i%a == 0) {
      std::cout << "Fizz\n";
    } else if (i%b == 0) {
      std::cout << "Buzz\n";
    } else {
      std::cout << i << "\n";
    }
  }
}
