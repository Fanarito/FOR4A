#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cout << "A: ";
  cin >> a;
  cout << "B: ";
  cin >> b;
  cout << "C: ";
  cin >> c;

  if ((a && b) || c) {
    cout << 1;
  } else {
    cout << 0;
  }

  return 0;
}
