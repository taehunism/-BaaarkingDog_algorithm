#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    

    while (true) {
        string cmd;
        getline(cin, cmd);
        if (cmd == ".") { // '.' 문자가 입력되면 루프 종료
            break;
        }
    
        stack<char> s;
    
        bool valid = true;

        for (auto c : cmd) {
            if (c == '(' || c == '[') {
                s.push(c);
            } else if (c == ')') {
                if (s.empty() || s.top() != '(') {
                    valid = false;
                    break;
                }
                s.pop();
            } 
            else if (c == ']') {
                if (s.empty() || s.top() != '[') {
                    valid = false;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty()) valid = false;
        if(valid) cout << "yes\n";
        else cout << "no\n"; 

    }

    return 0;
}
