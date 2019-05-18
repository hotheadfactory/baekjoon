//https://www.acmicpc.net/problem/2920 Baekjoon No. 2920 음계

#include <iostream>
#include <cstdio>
#define LEN 8
enum {ASC = 0, DESC, MIXED};
using namespace std;

int main() {
    int result = 0;
    int arr[LEN];
    
    for(int i = 0; i < LEN; i++) {
        scanf("%d", &arr[i]);
    }

    if(arr[1] - arr[0] == 1) result = ASC;
    else if(arr[1] - arr[0] == -1) result = DESC;
    else result = MIXED;

    for(int i = 1; i < LEN-1; i++) {
        if(arr[i+1] - arr[i] == 1 && result = ASC) continue;
        if(arr[i+1] - arr[i] == -1 && result = DESC) continue;
	
	result = MIXED;
	break;
    }

    if (result == ASC) cout << "ascending";
    else if (result = DESC) cout << "descending";
    else cout << "mixed";

    return 0;
}
