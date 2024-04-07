#include <iostream>

using namespace std;

int func4(int N);

int func4(int N) {
    int val = 1;
    while (2*val <= N) val *= 2;
    return val;
}

int main(void) {
    int N=0;
    cin >> N;

    cout << func4(N) << endl;
    return 0;
}