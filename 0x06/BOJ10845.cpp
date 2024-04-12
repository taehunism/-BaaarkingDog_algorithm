#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int MX=10001;
    vector<int> q(MX);
    int head = 0, tail = 0, n = 0, m = 0;
    string cmd;        
 
    cin >> n;

    for(int i = 0; i<n; i++) {
        cin >> cmd;

        if(cmd == "push") {
            cin >> m;
            q[tail++] = m;
        }

        else if(cmd == "pop") {
            if(tail - head == 0) {
                cout << -1 << '\n';
            }
            else cout << q[head++] << '\n';
        }

        else if(cmd == "size") {
            cout << (tail-head) << "\n";
        }

        else if(cmd == "empty") {
            if(tail-head == 0) cout << 1 << '\n';
            else cout << 0 << '\n';
        }

        else if(cmd == "front") {
            if(tail - head == 0) {
                cout << -1 << '\n';
            }
            else cout << q[head] << '\n';
        }

        else if(cmd == "back") {
            if(tail - head == 0) {
                cout << -1 << '\n';
            }
            else cout << q[tail-1] << '\n';
        }
    }

    return 0;
}