//https://www.acmicpc.net/problem/10989 Baekjoon No.10989 수 정렬하기 3
#include <iostream>
using namespace std;

int main() {
    int arr[10001];
    int n;
    int tmp;
    cin >> n;
    for(int i = 0; i < n; i++) {
      cin >> tmp;
      arr[tmp]++;
    }
    for(int i = 0; i < 10001; i++) {
      if (arr[i] != 0) {
        for(int j = 0; j < arr[i]; j++) {
          cout << i << endl;
        }
      }
    }
    return 0;
}
