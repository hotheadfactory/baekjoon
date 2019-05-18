// https://www.acmicpc.net/problem/2164 Baekjoon No.2164 카드2
#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int n;

int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    q.push(i);
  }
  while(!q.empty()){
    if(q.size()!=1) {
      q.pop();
    }
    else break;
    q.push(q.front());
    if(!q.empty()) {
      q.pop();
    }
    else break;
    }
    printf("%d",q.front());
}
