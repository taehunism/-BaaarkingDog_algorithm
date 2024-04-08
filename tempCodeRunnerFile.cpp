#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int chance=0;
    string input;
    string command;
    list<string> List = {};

    cin >> input;
    cin >> chance;
    cin.ignore();
    auto t = List.end();
    List.insert(t, input);
    // cursor = t 
    // t++ t-- is cursor moving
    
    for (int i = 0; i<chance; i++) {

        getline(cin, command);

        if(command == "L") t--;
            
        if(command == "D") t++;
            
        if(command == "B") {
            if(t != List.begin()) t = List.erase(--t);
        }

        if(command.size() > 2 && command[0] == 'P') {
            List.insert(t, command.substr(2));
        }
    }
    
    for (auto i : List) cout << i;
    cout << '\n';
}