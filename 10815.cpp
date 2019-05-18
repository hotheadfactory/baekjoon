//https://www.acmicpc.net/problem/10815 Baekjoon No.10815 숫자 카드
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N; // N개 받음

  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i]; //벡터에 요소 저장
  }

  sort(v.begin(), v.end()); // 정렬
  int M;
  cin >> M;

  for (int i = 0; i < M; i++) {
    int num;
    cin >> num;// 배열저장않고 바로바로 처리
    int low = 0, high = N - 1;
    bool searched = false;
    while (low <= high) {
      int mid = (low + high) / 2;
      if (v[mid] == num) {
        searched = true;
        break;
      }
      else if (v[mid] < num) {
        low = mid + 1;
      }
      else {
        high = mid - 1;
      }
    }
    if (!searched) {
      cout << 0 << " ";
    }
    else {
      cout << 1 << " ";
    }
  }
    return 0;
}

// 간단한 이분 탐색 문제이다.
