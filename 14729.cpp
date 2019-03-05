//https://www.acmicpc.net/problem/14729 Baekjoon No.14729 칠무해
#include <iostream>
using namespace std;

int n, a[100001], x, y;
int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d.%d", &x, &y);
		a[x*1000+y]++;
	}
	for (int i = 0, c = 0; i <= 100000; i++) {
		while (a[i]) {
			--a[i], ++c;
			printf("%d.%03d\n", i / 1000, i % 1000);
			if (c == 7) return 0;
		}
	}
	return 0;
}
