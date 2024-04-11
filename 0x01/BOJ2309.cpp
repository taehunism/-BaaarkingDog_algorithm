//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int height[9];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int total = 0;
    int err = 0;
    for (int i = 0; i<9; i++) {
        cin >> height[i];
        total = total + height[i];
    }

    sort(height, height + 9);
    err = total - 100;

    for (int i = 0; i<9; i++) {
        if(err == height[i] + height[9-i-1]) {
            
        }
    }


    return 0;
}