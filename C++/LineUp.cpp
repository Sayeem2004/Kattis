#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> vect{ };
  vector<string> vect2{ };
  for (int i = 0; i < n; i++) {
    string a;
    cin >> a;
    vect.push_back(a);
    vect2.push_back(a);
  }
  sort(vect2.begin(),vect2.end());
  if (vect == vect2) {
    cout << "INCREASING";
    return 0;
  }
  reverse(vect2.begin(),vect2.end());
  if (vect == vect2) {
    cout << "DECREASING";
    return 0;
  }
  cout << "NEITHER";
}
