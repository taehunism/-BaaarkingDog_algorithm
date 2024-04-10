#include <bits/stdc++.h>
using namespace std;

int input[5];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0;
    int avg = 0;
    int mid = 0;
    
    for (int i = 0 ; i<5 ; i++) {
        cin >> input[i];
        sum = sum + input[i];
    }

    sort(input, input+5);
    mid = input[2];
    avg = sum / 5;

    cout << avg << "\n";
    cout << mid << "\n";
    
    return 0;
}