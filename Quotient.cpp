#include <iostream>

using namespace std;

int main () {
  struct Quotient {
    int nominator;
    int denominator;

    Quotient(int n, int d) {
      nominator = n;
      denominator = d;
    }

    Quotient add(const Quotient &other) const {
      return Quotient(nominator + other.nominator, denominator + other.denominator);
    }

    Quotient multiply(const Quotient &other) const {
      return Quotient(nominator * other.nominator, denominator * other.denominator);
    }

    void print() const {
      cout << nominator << "/" << denominator << endl;
      return;
    }
  };

  Quotient x(1, 2);
  Quotient y(2, 3);

  const Quotient z = x.add(y);

  z.print();

  cout << z.nominator << "/" << z.denominator << endl;

  return 0;
}