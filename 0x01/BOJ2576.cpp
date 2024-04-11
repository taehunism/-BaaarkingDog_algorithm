#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input = 0;
    int sum = 0;
    int min = 1000000;

    for (int i = 0; i<7; i++) {
        cin >> input;
        if(input % 2 == 1) {
            sum = sum + input;
            if (min > input) min = input;
        }
    }

    if (sum != 0) {
        cout << sum << "\n";
        cout << min << "\n";
        return 0;
    }

    cout << "-1" << "\n";
    return 0;
}