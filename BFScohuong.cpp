#include<bits/stdc++.h>

using namespace std;

bool visited[1005];
vector<int> adj[1005];

void BFS(int u){
    queue<int> qe;
    qe.push(u);
    visited[u] = true;
    while(!qe.empty()){
        int v = qe.front();
        qe.pop();
        cout << v <<" ";
        for(auto it : adj[v]){
            if(!visited[it]){
                qe.push(it);
                visited[it] = true;
            }
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
        BFS(u);
        cout << endl;
    }
    return 0;
}