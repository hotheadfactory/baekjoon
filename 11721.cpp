#include <iostream>
using namespace std;
int main() {
    char str[101];
    cin >> str;
    for(int i = 0; i < 10; i++) {
      for(int j = 0; j < 10; j++) {
        if(str[i*10+j] == '\0') {
          return 0;
        } else cout << str[i*10+j];
      }
      cout << endl;
    }
    return 0;
}
