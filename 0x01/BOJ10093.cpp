#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long a = 0;
    long long b = 0;
    int diff = 0;
    cin >> a >> b;
    if (a > b) swap(a,b)
    if (a == b || b - a == 1) cout << 0;
    
    cout << b-a-1 << '\n';

    return 0;
}
