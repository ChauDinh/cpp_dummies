#include <iostream>

using namespace std;

void change (int &val) {
  val = 0;
}

int main () {
  int variable = 10;
  cout << "Variable is " << variable << endl;
  change(variable);
  cout << "Variable is " << variable << endl;

  return 0;
}