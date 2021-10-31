#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int check;
  cin >> check;

  for (int divisor = 2; divisor * divisor <= check; ++divisor) {
    if (check % divisor == 0) {
      cout << check << " is not prime" << endl;
      cout << "It equals " << divisor << " x " << (check / divisor) << endl;
      break;
    }
  }

  for (int divisor = 1; divisor <= check; ++divisor) {
    if (check % divisor == 0) {
      continue;
    }
    cout << divisor << " does not divide " << check << endl;
  }
  return 0;
}