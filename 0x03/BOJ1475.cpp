#include <bits/stdc++.h>
using namespace std;
int n;
int d;

int cnt;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int set[10] = {0,1,2,3,4,5,6,7,8,9};
    cin >> n;
    int m=0;
    int temp = n;
    bool six=false;
    bool nine=false;
    while(temp != 0) {
        temp /= 10;
        m++;
    }

    for(int i = 0; i<m; i++) {
        d = d % 10;
        for(int j = 0; j < 10; j++) {
            if(j == d)
                cnt++;
                if(d == 6) six = true;
                if(d == 9) nine = true;
            else continue;
            if(six == false && nine == true) cnt--;
                }
    }
    cout << cnt << '\n';
    return 0;
}