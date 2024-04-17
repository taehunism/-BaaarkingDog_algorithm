#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
string board[102];
int cost[102][102];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    
    for(int i=0; i<n; i++) {
        cin >> board[i];
    }

    for(int i = 0; i < n; i++) fill(cost[i], cost[i] + m, -1); // cost 0~끝까지 다 -1로 초기화 

    queue<pair<int, int>> q;
    q.push({0, 0});
    cost[0][0] = 0;

    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        for(int k=0; k<4; k++) {
            int nx = cur.x + dx[k];
            int ny = cur.y + dy[k];
            if( nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if( cost[nx][ny] >= 0 || board[nx][ny] != '1') continue;
            cost[nx][ny] = cost[cur.x][cur.y] + 1; // 이웃과 근접한 블럭 cost + 1
            q.push({nx,ny});
        }
    }

    cout << cost[n-1][m-1]+1;
    return 0;
}