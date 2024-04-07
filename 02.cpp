#include <iostream>

using namespace std;

int func2(int arr[], int N);

int func2(int arr[], int N) {
    int check=0;
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<N; j++) {
            if (arr[i] + arr[j] == 100) {
                check = 1; 
                break;
            }
            else check = 0;
        } 
    }
    return check;
}
int main(void) {
    int N=0;
    cin >> N;
    int arr[N];
    for (int i = 0; i<N; i++) {
        cin >> arr[i];
    }
    cout << func2(arr, N) << endl;
    return 0;
}