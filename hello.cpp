#include <iostream>

using namespace std;

int main() {
  typedef long long l2;

  // print hello, world!
  cout << "Hello, World!" <<endl;
  cout << "This is text you want to show" << endl;
  cout << "you can " << "also print " << "multiple things" << endl;

  cout << 5/3 << endl;

  cout << "***" << endl;
  cout << "****" << endl;
  cout << "*****" << endl;
  cout << "******" << endl;

  int five = 5;
  cout << five << endl;
  int seven = 7;
  cout << seven << endl;

  five = seven + 2;
  cout << five << endl;

  seven = 0;
  cout << five << endl;

  const int FIVE = 5;
  cout << FIVE << endl;

  string text = "Johan said: \"heya!\" ";
  cout << text << endl;

  char letter = '@';
  cout << letter << endl;

  long long largeNumber = 989898989LL;
  cout << largeNumber << endl;

  double decimalNumber = 5.1;
  cout << decimalNumber << endl;

  bool thisIsFalse = false;
  bool thisIsTrue = true;
  cout << thisIsFalse << thisIsTrue << endl;

  int maxInt = 2147483648 - 1;
  int minInt = -2147483648;
  cout << maxInt + 1 << " and " << minInt - 10 << endl;

  
  l2 aLargeNumber = 99999999988888889LL;
  cout << aLargeNumber << endl;

  string name;
  cout << "What's your first name?" << endl;
  cin >> name;

  int age;
  cout << "How old are you?" << endl;
  cin >> age;

  cout << "Hi, " << name << "!" << endl;
  cout << "You are " << age << " years old!" << endl;

  string line;
  cout << "Type some text, and press Enter: " << endl;
  getline(cin, line);

  cout << "You typed: " << line << endl;
  
  return 0;
}