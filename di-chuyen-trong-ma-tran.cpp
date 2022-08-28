#include<bits/stdc++.h>
using namespace std;

void solution(){
	int n, m;
	cin >> n >> m;
	vector<vector<int > > A(n + 1, vector<int>(m + 1, 0)), dp(n + 1, vector<int>(m + 1, 0)); 
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin >> A[i][j]; 
	dp[1][1] = 1; 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(i == 1 && j == 1) continue;
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	cout << dp[n][m] << endl; 
}

int main(){
	int t; cin>>t;
	while(t--) solution();
	return 0;
}

