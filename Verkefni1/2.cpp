#include <iostream>
using namespace std;

int main() {
  unsigned long long int a;
  cin >> a;
  unsigned long long int buffer = 1;
  for (unsigned long long int i = 1; i <= a; i++) {
    buffer *= i;
  }
  cout << buffer;

  return 0;
}
