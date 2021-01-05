#include <iostream>

using namespace std;

int main() {
  int a, count = 0;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int b;
    cin >> b;
    if (b < 0) {
      count++;
    }
  }
  cout << count << endl;
}
