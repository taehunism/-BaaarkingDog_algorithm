#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
int box[1002][1002];
int n,m;
int dist[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n; // N X M
    queue<pair<int, int>> q;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) { 
            cin >> box[i][j];
            if(box[i][j] == 1) q.push({i,j});
            if(box[i][j] == 0) dist[i][j] = -1;
        }
    }

    while(!q.empty()) {
        auto cur = q.front(); q.pop(); // 시작점 좌표
        for(int k=0; k<4; k++) {
            int nx = cur.x + dx[k];
            int ny = cur.y + dy[k];
            if( nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if( dist[nx][ny] >= 0) continue;
            dist[nx][ny] = dist[cur.x][cur.y] + 1; // cost 값 올리기
            q.push({nx,ny}); // 값이 있는 좌표값 push
        }
   }            
   int ans = 0;
   for(int i = 0; i<n; i++) {
    for(int j = 0 ; j<m; j++) {
        if(dist[i][j] == -1) {
            cout << -1;
            return 0;
        }
        ans = max(ans, dist[i][j]);
        }
   }
    cout << ans;
}