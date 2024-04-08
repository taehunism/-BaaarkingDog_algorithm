#include <iostream>
#include <string>
using namespace std;


void alpha(string arr, int len);

int abc[26];

void alpha(string arr, int len) {

    for(int i=0; i<len; i++) {
        abc[arr[i] - 97]++; 
        // or abc[arr[i] - 'a'];
    }

    for(int i=0; i<26; i++) {
        cout << abc[i] << " ";
    }
}


int main(void) {
    int len = 0;
    string input;
    ios::sync_with_stdio(0);

    cin >> input;
    cin.tie(0);
    len = input.size();
    alpha(input, len);

    return 0;
}