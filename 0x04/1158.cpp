#include <bits/stdc++.h>
using namespace std;
int k, n, b;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    queue<int> q;
    int a[n];
    int c=0;
    for(int i = 0; i<n; i++) {
        q.push(i);
    }

    for(int i = 0 ; i<n; i++) {
        if(c==3) {
            a[b++] = q.front();
            q.pop();
            c=0;
        }
        q.push(i);
        q.pop();
        c++;

        
    }
    for(int i = 0; i<n; i++) cout << a[i] << " ";
    return 0;
}
