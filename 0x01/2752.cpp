#include <iostream>
#include <algorithm>
using namespace std;

int a[3];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 0; i<3; i++) {
        cin >> a[i];
    }

    sort(a,a+3);

    for(int i = 0; i<3; i++) {
        cout << a[i] << " ";
    }
    return 0;
}