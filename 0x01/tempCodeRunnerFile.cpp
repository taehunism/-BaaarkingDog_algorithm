#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long a = 0;
    long long b = 0;
    int diff = 0;
    cin >> a >> b;
    if(a != b) {
        diff = abs(b - a) - 1;
        cout << diff << "\n";
        if (diff > 0) {
            long long arr[diff];
            for (int i = 0; i < diff; i++) {
                arr[i] = a + i + 1;
                cout << arr[i] << " ";
            }
        }
    } else {
        cout << 0;
    }
    return 0;
}
