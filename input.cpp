#include <iostream>

using namespace std;

int main() {
  string name;
  cout << "What's your first name?" << endl;
  cin >> name;

  int age;
  cout << "How old are you?" << endl;
  cin >> age;

  cout << "Hi, " << name << "!" << endl;
  cout << "You are " << age << " years old!" << endl;
}