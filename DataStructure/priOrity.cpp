#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  priority_queue<int> pq;
  
  bool cmp(int a, int b) {
    return a > b;
  }

  priority_queue<int, vector<int>, cmp> pq;

  pq.push(1);
  pq.push(2);
  pq.push(3);

  return 0;
}