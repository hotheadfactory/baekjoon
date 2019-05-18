//https://www.acmicpc.net/problem/3190 Baekjoon No.3190 뱀
#include<iostream>
#include<deque>
using namespace std;

int idx[4]={0, 1,0,-1};
int idy[4]={1, 0, -1, 0};
int N;
int map[101][101];
int visited[101][101];
pair<int, char>change[101];
deque<pair<int, int>> q;
int dir;

int main() {
	int K, L;
	int a, b;
	char c;
	int i, j;
	int sec=0;
	int x, y;
	int tmpx, tmpy;
	pair<int, int> tmp;
	scanf("%d", &N);

	for(i=0; i<N; i++) {
		for(j=0; j<N; j++) {
			map[i][j]=0;
    }
  }

	scanf("%d", &K);
  scanf("%d", &L);

	for(i=0; i<K; i++) {
		scanf("%d %d", &a, &b);
		map[a-1][b-1]=1;
	}
	for(i = 0; i < L; i++) {
		scanf("%d %c", &a, &c);
		change[i].first = a;
		change[i].second = c;
	}

	dir = 0;
	x = 0;
	y = 0;
	q.push_back(make_pair(x, y));
	a=0;
	while(q.size() > 0) {
		sec++;
		tmp = q.back();
		x = tmp.first+idx[dir];
		y = tmp.second+idy[dir];

		if(visited[x][y] == 1 || x < 0 || x >=N || y < 0 || y >=N) {
			break;
    }

		q.push_back(make_pair(x, y));
		visited[x][y]=1;
		if(map[x][y] == 1) {
			map[x][y]=0;
		}
		else {
			tmp = q.front();
			visited[tmp.first][tmp.second] = 0;
			q.pop_front();
		}
		if(a < L && sec == change[a].first) {
			if(change[a++].second == 'D') {
				dir = (dir+1+4)%4;
      }
			else {
				dir = (dir-1+4)%4;
      }
		}
	}
	printf("%d\n", sec);
  return 0;
}
