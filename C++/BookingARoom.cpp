#include <iostream>

using namespace std;

int main() {
  int rooms, booked;
  cin >> rooms >> booked;
  int a[rooms];
  for (int i = 0; i < rooms; i++) {a[i] = i+1;}
  for (int i = 0; i < booked; i++) {
    int b;
    cin >> b;
    a[b-1] = 0;
  }
  if (booked >= rooms) {
    cout << "too late" << endl;
    return 0;
  }
  for (int i = 0; i < rooms; i++) {
    if (a[i] != 0) {
      cout << a[i] << endl;
      return 0;
    }
  }
}
