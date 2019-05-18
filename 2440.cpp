#include <iostream>
using namespace std;

int main() {
  int a, i, j;

  cin >> a;

  for(i = a; i > 0; i--) {
    for(j = i; j > 0; j--) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
