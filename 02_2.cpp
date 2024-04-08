#include <iostream>

using namespace std;

int func2(int arr[], int N);

int freq[1000];
int func2(int arr[], int N) {
    for(int i = 0; i<N; i++) {
        if(freq[100-arr[i]] == 1) return 1;
        freq[arr[i]] = 1;
    }
    return 0;

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N=0;
    cin >> N;
    int arr[N];
    for (int i = 0; i<N; i++) {
        cin >> arr[i];
    }
    cout << func2(arr, N) << endl;
    return 0;
}