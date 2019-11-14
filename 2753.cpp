// https://www.acmicpc.net/problem/2753 Baekjoon No.2753 윤년
# include <iostream>
using namespace std;

int main() {
  int yr = 0;
  int answer = 0;
  cin >> yr;
  if((yr % 4 == 0) && (yr % 100 != 0)) {
    answer = 1;
  } else if (yr % 400 == 0) {
    answer = 1;
  }
  cout << answer << endl;
}
