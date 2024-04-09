#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    stack<int> s;
    int n = 0;
    cin >> n;
    while(n--) {
        string cmd;
        cin >> cmd;
        int val=0;
        if(cmd == "push") {
            cin >> val;
            s.push(val);
        }

        if(cmd == "pop") {
            if(s.empty() != 1) {
                cout << s.top() << "\n";
                s.pop();
                
            }
            else if(s.empty()==1) cout << "-1" << "\n";
        }

        if(cmd == "top") {
            if(s.empty()!=1) {
                cout << s.top();
                cout << "\n";
            }
            else if(s.empty() == 1) cout << "-1" << "\n";
        }

        if(cmd == "size") {
            cout << s.size();
            cout << "\n";
        }

        if(cmd == "empty") {
            cout << s.empty();
            cout << "\n";
        }
    }
    return 0;
}
