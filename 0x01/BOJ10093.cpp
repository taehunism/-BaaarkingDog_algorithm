//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long a = 0;
    long long b = 0;
    int diff = 0;
    cin >> a >> b;
    if (a > b) swap(a,b);
    if (a == b || b - a == 1) cout << 0;
    else {
    cout << b-a-1 << '\n';

    for (long long i = 0; i<b-a-1;i++) {
        cout << a+i+1 << " ";
    }
    }
    return 0;
}
