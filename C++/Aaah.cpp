#include <iostream>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  if (a.size() >= b.size()) {
    cout << "go" << endl;
  } else {
    cout << "no" << endl;
  }
}
