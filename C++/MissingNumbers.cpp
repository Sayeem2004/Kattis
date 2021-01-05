#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vect;
  int count1 = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    vect.push_back(a);
  }
  int max = *max_element(vect.begin(),vect.end());
  for (int i = 1; i <= max; i++) {
    if (find(vect.begin(),vect.end(),i) == vect.end()) {
      cout << i << endl;
      count1 += 1;
    }
  }
  if (count1 == 0) {
    cout << "good job";
  }
}
