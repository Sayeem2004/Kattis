#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double count, sec;
    cin >> count >> sec;
    double bpm = 60 * count / sec;
    double difference = bpm / count;
    double abpm1 = bpm - difference, abpm2 = bpm + difference;
    cout << fixed << setprecision(6) << abpm1 << " ";
    cout << fixed << setprecision(6) << bpm << " ";
    cout << fixed << setprecision(6) << abpm2 << endl;
  }
}
