#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int chance=0;
    string input;

    list<char> List;

    cin >> input;
    cin.ignore();
    for (auto c : input) List.push_back(c);

    auto t = List.end();
    
    cin >> chance;
    cin.ignore();
    
    // cursor = t 
    // t++ t-- is cursor moving
    
    for (int i = 0; i<chance; i++) {
        char command;
        cin >> command;

        if(command == 'L') if(t != List.begin()) t--;
            
        if(command == 'D') if(t != List.end()) t++;
            
        if(command == 'B') {
            if(t != List.begin()) t = List.erase(--t);
        }

        if(command == 'P') {
            char add;
            cin >> add;
            List.insert(t, add);
        }
    }

    for (auto i : List) cout << i;
    cout << '\n';
    
    return 0;
}