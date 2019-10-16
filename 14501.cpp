// https://www.acmicpc.net/problem/14501 Baekjoon No.14501 퇴사
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int t[n+1];
  int p[n+1];
  int dp[n+1];
  for(int i = 1; i <= n; i++) {
    cin >> t[i] >> p[i];
    dp[i] = p[i];
  }

  for(int i = 2; i <= n; i++) {
    for(int j = 1; j < i; j++) {
      if(i-j >= t[j]) {
        dp[i] = max(p[i]+dp[j], dp[i]);
      }
    }
  }

  int max = 0;

  for(int i = 1; i <= n; i++) {
    if (i + t[i] <= n + 1) {
      if (max < dp[i]) {
        max = dp[i];
      }
    }
  }
  cout << max;
}
