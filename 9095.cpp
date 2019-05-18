// https://www.acmicpc.net/problem/9095 Baekjoon No.9095 1, 2, 3 더하기
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    int max = 0;
    for(int i = 0; i < n; i++) {
        cin >> a;
        int arr[a+1];
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 4;
        for(int j = 4; j < a+1; j++) {
            arr[j] = arr[j-1] + arr[j-2] + arr[j-3];
        }
        cout << arr[a] << endl;
    }
}
