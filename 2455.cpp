#include <iostream>
using namespace std;

int main() {
  int max = 0;
  int current = 0;
  for(int i = 0; i < 4; i++) {
    int a, b;
    cin >> a >> b;
    cout << a << b << endl;
    current = current - a + b;
    cout << "현재 " << current << "명!" << endl;
    if(max < current) max = current;
  }
  cout << max << endl;
  return 0;
}
