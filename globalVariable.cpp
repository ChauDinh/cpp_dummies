#include <iostream>

using namespace std;

int currentMoney = 0;

void deposit (int newMoney) {
  currentMoney += newMoney;
  
  return;
}

void withdraw (int withdrawal) {
  currentMoney -= withdrawal;

  return;
}

int main () {
  cout << "Currently, you have: " << currentMoney << " money" << endl;
  deposit(1000);
  withdraw(10);
  cout << "Oops! your current balance is " << currentMoney << " money" << endl;
}

