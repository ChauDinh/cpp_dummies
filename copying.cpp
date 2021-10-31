#include <iostream>

using namespace std;

void change (int val) {
  val = 0;
}

int main () {
  int variable = 100;
  cout << "Variable is " << variable << endl;
  change(variable);
  cout << "Variable after change is " << variable << endl;

  return 0;
}