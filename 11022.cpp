// https://www.acmicpc.net/problem/11022 Baekjoon No. 11022 A+B - 8
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n][2];
  for (int i = 0; i < n; i++) {
    cin >> arr[i][0] >> arr[i][1];
  }

  for (int i = 0; i < n; i++) {
    cout << "Case #" << i+1 << ": " << arr[i][0] << " + " << arr[i][1] << " = " << arr[i][0]+arr[i][1] << endl;
  }
  return 0;
}
