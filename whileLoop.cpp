#include <iostream>

using namespace std;

int main() {
  int num;
  cin >> num;

  cout << num << " --> ";

  while (num != 1) {
    if (num % 2 == 0) {
      num /= 2;
    } else {
      num = 3 * num + 1;
    }
    cout << num << " --> ";
  }
  return 0;
}