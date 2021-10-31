#include <iostream>
#include <map>

using namespace std;

int main() {
  map<string, int> age;

  age["Johan"] = 22;
  age["Simon"] = 23;

  if (age.find("Aron") == age.end()) {
    cout << "No record of Aron's age" << endl;
  }
  return 0;
}