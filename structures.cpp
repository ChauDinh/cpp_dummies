#include <iostream>

using namespace std;

int main () {
  struct Point
  {
    double x;
    double y;
  };

  Point origin;
  origin.x = 0;
  origin.y = 0;

  cout << "The origin is (" << origin.x << ", " << origin.y << ")." << endl;
  
  return 0;
}