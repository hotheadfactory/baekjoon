// https://www.acmicpc.net/problem/10039 Baekjoon No.10039 평균 점수
#include <iostream>
using namespace std;

int main() {
  int temp;
  int sum = 0;

  for(int i = 0; i < 5; i++) {
    temp = 0;
    scanf("%d", &temp);
    if (temp < 40) {
      sum += 40;
    }
    else sum += temp;
  }
  cout << sum/5 << endl;
}
