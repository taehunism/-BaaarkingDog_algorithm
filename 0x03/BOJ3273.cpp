#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n=0, x=0, cnt=0;
    cin >> n;
    int in[n];

    for (int i = 0 ; i<n; i++) {
        cin >> in[i];
    }

    cin >> x;

    sort(in, in+n);
    
    do {
        if(in[0] + in[1] == x) {
            cnt++;
        }
    } while(next_permutation(in, in+n));
    cout << cnt << '\n';
    
    return 0;
}