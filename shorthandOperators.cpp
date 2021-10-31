#include <iostream>

using namespace std;

int main() {
  int num = 0;

  num += 1;
  cout << num << endl;

  num *= 2;
  cout << num << endl;

  num -= 3;
  cout << num << endl;

  cout << num++ << endl; // display -1
  cout << num << endl; // display 0

  cout << ++num << endl; // display 1
  cout << num << endl; // display 1

  cout << num-- << endl; // display 1
  cout << num << endl; // display 0
  return 0;
}