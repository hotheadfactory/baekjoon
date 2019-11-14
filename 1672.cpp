// https://www.acmicpc.net/problem/1672 Baekjoon No.1672 DNA 해독
#include <iostream>
#include <stack>
using namespace std;


int encode(char a) {
  switch(a) {
    case 'A':
      return 0;
      break;
    case 'G':
      return 1;
      break;
    case 'C':
      return 2;
      break;
    case 'T':
      return 3;
      break;
  }
  return -1;
}

char decode(int a) {
  switch(a) {
    case 0:
      return 'A';
      break;
    case 1:
      return 'G';
      break;
    case 2:
      return 'C';
      break;
    case 3:
      return 'T';
      break;
  }
  return -1;
}

int main() {
  int n = 0;
  int a, b;
  char tmpchar;
  int tmp = 0;
  stack<int> s;
  int arr[4][4] = {
    {0, 2, 0, 1},
    {2, 1, 3, 0},
    {0, 3, 2, 1},
    {1, 0, 1, 3}
  };
  cin >> n;
  char c[n];
  cin >> c;
  for (int i = 0; i < n; i++) {
    tmpchar = c[i];
    tmp = encode(tmpchar);
    s.push(tmp);
  }
  while(s.size() > 1) {
    //cout << "제일 위에 " << s.top() << endl;
    b = s.top();
    s.pop();
    //cout << "그 바로 밑에 " << s.top() << endl;
    a = s.top();
    s.pop();
    s.push(arr[a][b]);
    //cout << "이제는 " << s.top() << endl;
  }

  cout << decode(s.top());
  /*for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }*/
}
