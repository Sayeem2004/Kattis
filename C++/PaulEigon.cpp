#include <iostream>

using namespace std;

int main() {
  int n, s, s2;
  cin >> n >> s >> s2;
  int t = (s + s2) / n;
  if (t % 2 == 0) {
    cout << "paul" << endl;
  } else {
    cout << "opponent" << endl;
  }
}
