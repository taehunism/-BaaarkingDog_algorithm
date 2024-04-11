#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c = 0;
    int reward = 0;
    int same = 0;
    int mx = 0;
    cin >> a >> b >> c;
    if (a==b && a==c) reward = 10000 + a*1000;
    else if (a==b) reward = 1000 + a*100; 
    else if (a==c) reward = 1000 + a*100;
    else if (b==c) reward = 1000 + b*100;
    else {
        mx = max({a,b,c});
        reward = mx*100;
    }
    cout << reward << "\n";

    return 0;
}