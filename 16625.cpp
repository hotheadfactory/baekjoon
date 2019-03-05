//https://www.acmicpc.net/problem/16625 Baekjoon No.16625 Das Blinkenlights
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    int mul;
    cin >> a >> b >> mul;
    if (lcm(a, b) <= mul) {
      cout << "yes" << endl;
    }
    else cout << "no" << endl;
    return 0;
}
