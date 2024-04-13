#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;
    stack<char> s;
    int cnt = 0;
    for(int i = 0 ; i<a.size(); i++) {
        if( a[i] == '(' ) {
            s.push(a[i]);
        }
        else {
            if(a[i-1] == '(') {
                s.pop();
                cnt += s.size();
            }
            else {
                cnt++;
                s.pop();
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}