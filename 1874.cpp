//Baekjoon https://www.acmicpc.net/problem/1874 스택 수열
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main() {
  int n;
  stack<int> st;
  queue<char> answer;
  bool success = 1;
  int sti = 1;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < n; i++) {
    while(a[i] >= sti) {
      answer.push('+');
      st.push(sti);
      sti++;
    }
    if(a[i] == st.top()) {
      st.pop();
      answer.push('-');
    }
    else if (a[i] < st.top()) {
      success = 0;
      break;
    }
  }
  if (success == 1) {
    while(answer.empty() == 0) {
      printf("%c\n", answer.front());
      answer.pop();
    }
  } else if (success == 0) cout << "NO" << endl;
  return 0;
}
