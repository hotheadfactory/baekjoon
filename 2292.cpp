// https://www.acmicpc.net/problem/2292 Baekjoon No.2292 벌집

#include <iostream>
using namespace std;

int main() {
    int n;
    int route = 1; 
    int tmp = 1;
    cin >> n;
    if (n != 1) {
	while(1) {
	    if(tmp >= n) {
		    break;
	    }
	    tmp += route*6;
	    route++;
	}
    } 
    cout << route << endl;
    return 0;
}
