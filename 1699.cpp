// https://www.acmicpc.net/problem/1699 Baekjoon No.1699 제곱수의 합
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int dp[n+1] = {0,};
  for (int i = 1; i<=n; i++) {
    for (int j = 1; j*j <= i; j++) {
      //j제곱을 빼며 거꾸로 탐색, 비어있을 경우 그냥 넣고 아니면 기존값과 비교
      if(dp[i] > dp[i-j*j]+1 || dp[i] == 0) {
        dp[i] = dp[i-j*j]+1;
      }
    }
  }
  cout << dp[n];
  return 0;
}
