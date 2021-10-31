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

  cout << "Johan is " << age["Johan"] << " years old" << endl;
  cout << "Anton is " << age["Anton"] << " years old" << endl;
  
  age.erase("Johan");
  cout << "Johan is " << age["Johan"] << " years old" << endl;

  map<string, int>::iterator last = --age.end();
  cout << (*last).first << " is " << (*last).second << " years old" << endl;
  return 0;
}