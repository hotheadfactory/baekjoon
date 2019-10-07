#include <iostream>
#include <string>
using namespace std;
#define MAX 51

int main() {
  int loop = 0;
  char ps[MAX];
  int pos = 0;
  cin >> loop;
  for(int j = 0; j < loop; j++) {
    pos = 0;
    cin >> ps;
    for (int i = 0; i < MAX; i++) {
      if(ps[i] == '(') {
        pos++;
      }
      else if (ps[i] == ')') {
        pos--;
      }
      else if(ps[i] == '\0') {
        break;
      }
      if (pos < 0) {
        break;
      }
    }
    if(pos == 0) {
      cout <<"YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}
