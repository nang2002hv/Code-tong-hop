#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int a[1001][1001],n,dem;
bool vist[1001];

void input(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

void DFS_stack(int i){
	vist[i] = true;
	stack<int> st;
	st.push(i);
	cout << i << " ";
	while(!st.empty()){
		int s = st.top();
		st.pop();
        for (int v = 1; v <= n; v++){
            if (!vist[v] && a[s][v]){
            	cout << v <<" ";
            	vist[v] = true;
            	st.push(s);
            	st.push(v);
            	break;

            }
        }
	}
}


void duyet_tru(){
	cout << "cac dinh tru" << endl;
	for (int u = 1; u <= n; u++){
		memset(vist,false,sizeof(vist));
		dem = 0;
		vist[u] = true;
		if ( u == 1){
			DFS_dequy(2);
			if (dem != n-1) cout << u <<" ";
		} else {
			DFS_dequy(1);
			if (dem != n-1) cout << u <<" ";
		}
	}
}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	input();
	duyet_tru();
}