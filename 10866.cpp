// Baekjoon https://www.acmicpc.net/problem/10866 덱
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {

  deque<int> dq;
  int a, n;
  string s;

  cin >> n;

  for(int i = 0; i <n; i++) {
      cin >> s;
      if(s == "push_back") {
        cin >> a;
        dq.push_back(a);
      }
      else if(s == "push_front") {
        cin >> a;
        dq.push_front(a);
      }
      else if(s == "pop_back") {
        if(!dq.empty()) {
          cout << dq.back() << endl;
          dq.pop_back();
        } else cout << "-1" << endl;
      }
      else if(s == "pop_front") {
        if(!dq.empty()) {
          cout << dq.front() << endl;
          dq.pop_front();
        } else cout << "-1" << endl;
      }
      else if(s == "front") {
        if(!dq.empty()) cout << dq.front() << endl;
        else cout << "-1" << endl;
      }
      else if(s == "back") {
        if(!dq.empty()) cout << dq.back() << endl;
        else cout << "-1" << endl;
      }
      else if(s == "size") {
        cout << dq.size() << endl;
      }
      else if(s == "empty") {
        cout << dq.empty() << endl;
      }
  }
  return 0;
}
