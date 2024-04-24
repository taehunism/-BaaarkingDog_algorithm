#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int k, n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    queue<int> q;
    int a[n];
    int c=0;

    for(int i = 1; i<=n; i++) {
        q.push(i);
    } // 1 2 3 4 5 6 7
    int idx = 0;
    while (!q.empty()) {
        for (int i = 0; i < k - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
        a[idx++] = q.front();
        q.pop();
    }
    cout << "<";
    for(int i = 0; i<n; i++) {
        if(i == n-1) cout << a[i];
        else 
            cout << a[i] << ", ";
            
    }
    cout << ">";
    return 0;
}
