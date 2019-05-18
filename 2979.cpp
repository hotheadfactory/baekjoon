// https://www.acmicpc.net/problem/2979 Baekjoon No. 2979 트럭 주차
#include <iostream>
using namespace std;

int main() {
  int fee[3];
  int car[3][2];
  int toll = 0;
  int mint = 1, maxt = 1;
  cin >> fee[0] >> fee[1] >> fee[2];
  fee[1] *= 2;
  fee[2] *= 3;

  cin >> car[0][0] >> car[0][1] >> car[1][0] >> car[1][1] >> car[2][0] >> car[2][1];


  for(int i = 0; i < 3; i++) {
    if(car[i][0] < mint) mint = car[i][0];
    if(car[i][1] > maxt) maxt = car[i][1];
  }
  for( int i = mint; i < maxt; i++ ) {
    int num = 0;
    for (int j = 0; j < 3; j++) {
      if(car[j][0] <= i && i < car[j][1]) {
        num++;
      }
    }
    if (num > 0) {
      toll += fee[num-1];
    }
  }
  cout << toll;
}

// 1시간째: 5원
// 2시간째: 11원
// 3시간째: 14원
// 4시간째: 17원
// 5시간째: 23원
// 6시간째: 27원
// 7시간째: 33원
