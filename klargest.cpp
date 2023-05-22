#include <queue>
#include <vector>
using namespace std;
int kth_largest(vector<int> values, int k) {
  priority_queue<int, vector<int>> q;
  for (int i = 0; i < values.size(); i++) {
    q.push(values.at(i));
  }
  int out;
  for (int i = 0; i < k-1; i++) q.pop();
  return q.top();
}