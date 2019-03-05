#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int> dq;
  int a, n;
  int act = 0;

  cin >> a >> n;

  for(int i = 1; i <= a; i++) {
    dq.push_back(i);
  }
  int popList[n];
  for(int i = 0; i < n; i++) {
    int pos, popIndex, tmp;
    cin >> popIndex;
    //cout << "뺄 원소: " << popIndex << endl;
    for (int j = 0; j < a; j++) {
      if (dq.front() == popIndex) {
        dq.pop_front();
        //cout << "첫 원소임" << endl;
        //cout << "------------------------------------------" << endl;
        //for (int i = 0; i < dq.size(); i++) {
        //  cout << dq[i] << " ";
        //}
        //cout << "------------------------------------------" << endl;
        break;
      }
      else if (dq.back() == popIndex) {
        dq.pop_back();
        //cout << "끝 원소임" << endl;
        act++;
        //cout << "------------------------------------------" << endl;
        //for (int i = 0; i < dq.size(); i++) {
        //  cout << dq[i] << " ";
        //}
        //cout << "------------------------------------------" << endl;
        break;
      }
      else if (dq[j] == popIndex) {
        //cout << "찾았다! " << j << "번째이다." << endl;
        if (j < (dq.size()/2)+1) {
          //cout << "앞에서부터 뺀다." << endl;
          for(int k = 0; k < j; k++) {
            tmp = dq.front();
            dq.pop_front();
            dq.push_back(tmp);
            act++;
          }
          //cout << "현재 act 수 : " << act << endl;
          dq.pop_front();
          //cout << "이제 원하는 원소를 앞에서 뺍니다." << endl;
          //cout << "------------------------------------------" << endl;
          //for (int i = 0; i < dq.size(); i++) {
          //  cout << dq[i] << " ";
          //}
          //cout << "------------------------------------------" << endl;

        }
        else {
          //cout << "뒤에서부터 뺀다." << endl;
          for(int k = dq.size(); k > j; k--) {
            tmp = dq.back();
            dq.pop_back();
            dq.push_front(tmp);
            act++;
          }
          //cout << "현재 act 수 : " << act << endl;
          dq.pop_front();
          //cout << "이제 원하는 원소를 뒤에서 뺍니다." << endl;
          //cout << "------------------------------------------" << endl;
          //for (int i = 0; i < dq.size(); i++) {
          //  cout << dq[i] << " ";
          //}
          //cout << "------------------------------------------" << endl;
        }
        break;
      }
      //else cout << "원소 찾는 중..." << j << "번째" << endl;
    }
  }
  cout << act;
}
