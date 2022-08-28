#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> List[1005];
int chuaxet[1005];

void DFS(int u) {
    chuaxet[u] = 0;
    for(int v:List[u]) {
        if(chuaxet[v]) DFS(v);
    }
}

void canhcau() {
    for(int u=1; u<=n; u++) {
        for(int v=0; v<List[u].size(); v++) {
            int j = List[u][v];
            List[u].erase(List[u].begin() + v);
            DFS(u);
            bool check = false;
            for(int i=1; i<=n; i++) if(chuaxet[i]) check = true;
            if(check && u < j) cout << u << " " << j << " ";
            List[u].insert(List[u].begin() + v, j);
            memset(chuaxet, 1, sizeof(chuaxet));
        }
    }
}

void Solve() {
    cin >> n >> m;
    for(int i=0; i<=1000; i++) List[i].clear();
    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        List[u].push_back(v);
        List[v].push_back(u);
    }
    memset(chuaxet, 1, sizeof(chuaxet));
    canhcau();
    cout << endl;
}

main()
{
    int t; cin >> t;
    while(t--)
        Solve();
}