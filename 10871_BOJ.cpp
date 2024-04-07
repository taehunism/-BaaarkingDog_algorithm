#include <iostream>

using namespace std;

void func_(int x, int in_);

void func_(int x, int in_) {
    if(x > in_) cout << in_ << " ";
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, in_ = 0;
    
    cin >> n >> x;

    for (int i = 0; i<n; i++) {
        cin >> in_;
        func_(x, in_);
    }
    
    return 0;
}