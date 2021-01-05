#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, count;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string a, a2;
    cin >> a;
    for (char i : a) {
      a2 += tolower(i);
    }
    size_t index = a2.find("pink");
    size_t index2 = a2.find("rose");
    if (index != string::npos || index2 != string::npos) {
      count++;
    }
  }
  if (count == 0) {
    cout << "I must watch Star Wars with my daughter" << endl;
  } else {
    cout << count << endl;
  }
}
