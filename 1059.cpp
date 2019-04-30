#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
  int i, j, k, key;
  for (i = 1; i < n; i++) {
    key = arr[i]; //n회차에 n+1번째 요소 조회
    for (j = i-1; j >= 0; j--) {
      if (arr[j] <= key) break; //key보다 작은 원소 찾으면 중단
      arr[j+1] = arr[j]; //아니면 모든 원소를 한 칸씩 오른쪽으로 이동
    }
    arr[j+1] = key; //찾은 제자리에 key 배치
  }
}

int main() {
  int L, N, i, num, prev, next;
  cin >> L;
  int a[L];
  for(i = 0; i < L; i++) {
    cin >> a[i];
  }
  InsertionSort(a, L);
  cin >> N;
  if(N <= a[0]) {
    next = a[0];
    prev = 0;
  } else {
    for(i = 1; i < L; i++) {
      if(N <= a[i]) {
        next = a[i];
        prev = a[i-1];
        break;
      }
    }
  }
  num = (N - prev) * (next - N) - 1;
  if(num == -1) num++;
  cout << num;
  return 0;
}
