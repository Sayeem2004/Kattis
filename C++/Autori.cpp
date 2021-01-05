#include <iostream>

using namespace std;

int main() {
  string a,out = "";
  cin >> a;
  for (char i : a) {
    if (int(i) > 64 && int(i) < 91) {
      out += i;
    }
  }
  cout << out << endl;
}
