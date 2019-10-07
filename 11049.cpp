//https://www.acmicpc.net/problem/11049 Baekjoon No.11049 행렬 곱셈 순서
#include <iostream>
using namespace std;

int n;
int arr[502];
int dp[502][502];

int main() {
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d %d", &arr[i], &arr[i+1]);
  }

  for (int i = 0; i < n; i++) {
    for(int j = 1; j <= n-i; j++) {
      cout << "[" << i << "][" << j << "] 루프" << endl;
      int k = j + i;
      if (j == k) {
        dp[j][k] = 0;
        continue;
      }
      dp[j][k] = 2147483647;
      for(int l = j; l < k; l++) {
        dp[j][k] = min(dp[j][k], dp[j][l] + dp[l+1][k] + arr[j-1] * arr[l] * arr[k]);
        cout << "[" << j << "][" << k << "] 현재 최솟값 " << dp[j][k] << endl;
      }
    }
  }


  printf("%d", dp[1][n]);
  return 0;

}
