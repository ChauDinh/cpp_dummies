#include <iostream>
#include <vector>

#define rep(i, a, b) for (int i = a; i < b; ++i)

using namespace std;

int main() {
  vector<string> words;
  words.push_back("Simon");
  words.push_back("is");
  words.push_back("a");
  words.push_back("fish");

  rep(i, 0, words.size()) {
    cout << words[i] << " ";
  }

  vector<string>::iterator first = words.begin();

  cout << endl << "The first word is " << *first << endl;

  for (vector<string>::iterator it = words.begin(); it != words.end(); it++) {
    string value = *it;
    cout << value << endl;
  }

  cout << "--------" << endl;

  for (vector<string>::reverse_iterator it = words.rbegin(); it != words.rend(); it++) {
    string value = *it;
    cout << value << endl;
  }

  cout << "--------" << endl;

  words.erase(words.begin() + 1);
  words.insert(words.end(), "food");

  for (vector<string>::iterator it = words.begin(); it != words.end(); it++) {
    string value = *it;
    cout << value << " ";
  }

  return 0;
}