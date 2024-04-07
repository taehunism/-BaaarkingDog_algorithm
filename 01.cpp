#include <iostream>

using namespace std;

int mul_sum(int n);

int mul_sum(int n) {
    int sum=0;
    for(int i = 1; i<=n; i++) {
        if(i%3==0 || i%5==0) {
            sum = sum + i;
        }
    }
    return sum;
}

int main(void) {
    int n=0;

    cin >> n;
    cout << mul_sum(n) << endl;
    
    return 0;
}