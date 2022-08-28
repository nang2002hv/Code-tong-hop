#include<bits/stdc++.h>

using namespace std;

bool visited[1005];
vector<int> adj[1005];

void DFS(int u){
    cout << u <<" ";
    visited[u] = true;
    for(auto it : adj[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 0; i <= 1005; i ++) adj[i].clear();
        int n, m, u; cin >> n >> m >> u;
        for(int i = 1; i <= m; i ++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }
        memset(visited, false, sizeof(visited));
        DFS(u);
        cout << endl;
    }
    return 0;
}