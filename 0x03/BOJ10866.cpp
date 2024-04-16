#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    int n=0;
    int MX=10000;
    int d[2*MX+1];
    int head=MX, tail=MX;
    cin >> n;
    for(int i = 0; i<n; i++) {
        cin>>a;
        int m=0;
        if(a == "push_back") {
            cin>>m;
            d[tail++] = m;
        }
        if(a == "push_front") {
            cin>>m;
            d[--head] = m;
        }
        if(a == "front") {
            if(head - tail == 0) {
                cout << "-1\n";
            }
            else {
                cout << d[head] << '\n';
            }
        }
        if(a == "back") {
            if(head - tail == 0) {
                cout << "-1\n";
            }
            else {
                cout << d[tail-1] << '\n';
            }
        }
        if(a == "size") {
            cout << tail - head << '\n';
        }
        if(a == "empty") {
            if(head - tail == 0) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        if(a == "pop_front") {
            if(head - tail == 0) {
                cout << "-1\n";
            }
            else {
                cout << d[head++] << '\n';
            } 
        }
        if(a == "pop_back") {
            if(head - tail == 0) {
                cout << "-1\n";
            }
            else { 
                cout << d[--tail] << '\n';
            }
        }
    }
    return 0;
}