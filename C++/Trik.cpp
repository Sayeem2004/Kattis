#include <iostream>

using namespace std;

int main() {
  string a;
  cin >> a;
  int p1 = 1, p2 = 0, p3 = 0;
  for (char i : a) {
    if (i == 'A') {
      if (p1 == 1) {
        p1 = 0;
        p2 = 1;
        p3 = 0;
      } else if (p2 == 1) {
        p1 = 1;
        p2 = 0;
        p3 = 0;
      }
    } else if (i == 'B') {
      if (p2 == 1) {
        p1 = 0;
        p2 = 0;
        p3 = 1;
      } else if (p3 == 1) {
        p1 = 0;
        p2 = 1;
        p3 = 0;
      }
    } else {
      if (p3 == 1) {
        p1 = 1;
        p2 = 0;
        p3 = 0;
      } else if (p1 == 1){
        p1 = 0;
        p2 = 0;
        p3 = 1;
      }
    }
  }
  int out;
  if (p1 == 1) {
    cout << "1" << endl;
  } else if (p2 == 1) {
    cout << "2" << endl;
  } else {
    cout << "3" << endl;
  }
}
