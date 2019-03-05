#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

int n, ans, len;
char buf[100001];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", buf);
        len = strlen(buf);
        stack<char> st;
        st.push(buf[0]);

        for (int j = 1; j < len; ++j) {
            if (st.empty())
                st.push(buf[j]);

            else if (st.top() == buf[j])
                st.pop();
            else
                st.push(buf[j]);
        }

        if (st.empty())
            ans++;
    }
    printf("%d", ans);
}
