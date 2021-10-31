#include <iostream>

using namespace std;

int main() {
  string line;
  cout << "Type something, and press Enter: " << endl;
  getline(cin, line);

  cout << "You typed: " << line << endl;
}