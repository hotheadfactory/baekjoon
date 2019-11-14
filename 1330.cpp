// https://www.acmicpc.net/problem/1330 Baekjoon No.1330 두 수 비교하기
# include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a > b) {
    cout << ">" << endl;
  }
  if (a < b) {
    cout << "<" << endl;
  }
  if (a == b) {
    cout << "==" << endl;
  }
}
