#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string> 

using namespace std;

int main() {
  int n;
  int count1 = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int n2;
    count1 += 1;
    vector<int> vect{ };
    cin >> n2;
    for (int i = 0; i < n2; i++)  {
      int a;
      cin >> a;
      vect.push_back(a);
    }
    for (int i : vect) {
      int b = count(vect.begin(), vect.end(), i);
      if (b == 1) {
        cout << "Case #" << count1 << ": " << i << endl;
      }
    }
  }
}
