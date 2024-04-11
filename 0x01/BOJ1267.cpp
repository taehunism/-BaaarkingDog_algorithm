#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n = 0;
    cin >> n;

    int t[n];
    int tot_y = 0, tot_m = 0;
    
    for (int i = 0; i<n; i++) {
        cin >> t[i];
        tot_y = tot_y + ((t[i] / 30)+1) * 10;
        tot_m = tot_m + ((t[i] / 60)+1) * 15;
    }

    if(tot_y > tot_m) cout << "M" << " " << tot_m << "\n";
    else if(tot_m > tot_y) cout << "Y" << " " << tot_y << "\n";
    else if (tot_m == tot_y) cout << "Y" << " " << "M" << " " << tot_y << "\n";
    
    return 0;
}