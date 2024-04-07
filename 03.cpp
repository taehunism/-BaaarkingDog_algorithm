#include <iostream>
using namespace std;
int func3(int N);

int func3(int N) {
    int check = 0;
    for(int i = 0; i<N; i++) {
        if (i*i == N) {
            check = 1;
            break;
        }
        if (i*i != N) check = 0;
    }
    return check;
}

int main(void) {
    int N=0;
    cin >> N;

    cout << func3(N) << endl; 
    
    return 0;
}