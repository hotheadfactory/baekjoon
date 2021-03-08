// https://www.acmicpc.net/problem/11058 No. 11058 크리보드

#include<stdio.h>
#include<iostream>
#include<algorithm>
 
using namespace std;
  
int n;
long long d[101];

int main() {
    cin >> n;

    d[1] = 1;
    d[2] = 2;
    d[3] = 3;
    d[4] = 4;
    d[5] = 5;
    d[6] = 6;

    for (int i = 7; i <= n; i++) {
        for (int j = 1; j <= i-3; j++) {
            d[i] = max(max(d[i - 1] + 1, (d[i - (j+2)] * (j + 1))), d[i]);
        }
    }   
    cout << d[n];
}

