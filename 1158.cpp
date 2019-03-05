#include <iostream>
#include <queue>
using namespace std;

int main() {
  int N, M;
  queue<int> q;

  cin >> N >> M;
  for(int i = 1; i <= N; i++) {
    q.push(i);
  }

  cout << "<";
  while(q.size()) {
    if (q.size() == 1) {
      cout << q.front() << ">";
      q.pop();
      break;
    }
    for(int i = 1; i < M; i++) {
      q.push(q.front());
      q.pop();
    }
    cout << q.front() << ", ";
    q.pop();
  }
  cout << endl;
  return 0;
}
