//https://www.acmicpc.net/problem/1946 Beakjoon No.1946 신입사원
#include <iostream>
#include <algorithm>
using namespace std;

void Sort(int arr[][2], int n) {
  int i, j, k,
  int key[2];
  for (i = 1; i < n; i++) {
    key[0] = arr[i][0];
    key[1] = arr[i][1]; //n회차에 n+1번째 요소 조회
    for (j = i-1; j >= 0; j--) {
      if (arr[j][0] <= key[0]) break; //key보다 작은 원소 찾으면 중단
      arr[j+1][0] = arr[j][0];
      arr[j+1][1] = arr[j][1]; //아니면 모든 원소를 한 칸씩 오른쪽으로 이동
    }
    arr[j+1][0] = key[0];
    arr[j+1][1] = key[1]; //찾은 제자리에 key 배치
  }
}

int main() {
  int n, m;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &m);
    int arr[m][n];
    for(int j = 0; j < m; j++) {
      scanf("%d %d")
    }
  }
}
