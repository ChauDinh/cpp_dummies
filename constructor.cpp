#include <iostream>

using namespace std;

int main () {
  struct Point
  {
    double x;
    double y;

    Point(double theX, double theY) {
      x = theX;
      y = theY;
    }    
  };

  Point p(4, 2.1);
  cout << "The point is (" << p.x << ", " << p.y << ")." << endl;

  return 0;
}