#include <iostream>

using namespace std;

int main() {
  int input;
  cout << "Enter an input here: " << endl;
  cin >> input;

  if (input % 2 == 0) {
    cout << input << " is even" <<endl;
  }

  if (input % 2 == -1 || input % 2 == 1) {
    cout << input << " is odd" << endl;
  } 
  return 0;
}