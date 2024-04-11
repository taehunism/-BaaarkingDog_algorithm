#include <bits/stdc++.h>
using namespace std;

int a[3];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 0;

    for (int i = 0; i<3; i++) {
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        
        for (int j = 0; j<4; j++)
            if (a[j] == 1) cnt++;

        if(cnt==4) cout << 'E' << "\n";
        if(cnt==3) cout << 'A' << "\n";
        if(cnt==2) cout << 'B' << "\n";
        if(cnt==1) cout << 'C' << "\n";
        if(cnt==0) cout << 'D' << "\n";
        cnt = 0;
    }
    
    return 0;
}