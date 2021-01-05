#include <iostream>

using namespace std;

int main() {
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;
  int b1, b2, b3, b4;
  cin >> b1 >> b2 >> b3 >> b4;
  if (a1 + a2 + a3 + a4 > b1 + b2 + b3 + b4) {
    cout << "Gunnar" << endl;
  } else if (a1 + a2 + a3 + a4 < b1 + b2 + b3 + b4) {
    cout << "Emma" << endl;
  } else {
    cout << "Tie" << endl;
  }
}
