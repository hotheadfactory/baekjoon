//https://www.acmicpc.net/problem/11066 Baekjoon No.11066 파일 합치기
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int dp[501][501]; //다디내믹 프로그래밍을 위한 2차원 배열
int cost[501]; //각 번호의 숫자
int sum[501]; //n번까지의 총합
int t, k, i;

int dpf(int tx, int ty) {
    if (dp[tx][ty] != 0x3f3f3f3f)
        return dp[tx][ty];

    if (tx == ty)
        return dp[tx][ty] = 0;

    if (tx + 1 == ty)
        return dp[tx][ty] = cost[tx] + cost[ty];

    for (int mid = tx; mid < ty; ++mid) {
        int left = dpf(tx, mid);
        int right = dpf(mid + 1, ty);
        dp[tx][ty] = min(dp[tx][ty], left + right);
        //현재 저장된 값과 left+right를 더한 새 값 중 작은 것을 사용
    }
    return dp[tx][ty] += sum[ty] - sum[tx - 1];
}

int main() {
    scanf("%d", &t);
    while (t--) {
        memset(dp, 0x3f, sizeof(dp));
        scanf("%d", &k);
        for (i = 1; i <= k; ++i) {
            scanf("%d", &cost[i]);
            sum[i] = sum[i - 1] + cost[i];
        }
        printf("%d\n", dpf(1, k));
    }
    return 0;
}
