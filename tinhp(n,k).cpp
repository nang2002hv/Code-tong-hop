#include<bits/stdc++.h>
using namespace std;
#define int long long
long long M = pow(10,9)+7;
int P[1005][1005];

void Solve() {
	int n, k;
	cin >> n >> k;
	cout << P[n][k] << endl;
}

main() {
	P[0][0] = 1;
	for(int i=1; i<=1000; i++) {
		for(int j=0; j<=i; j++) {
			if(j==0) P[i][j] = 1;
			else if(i==j) P[i][j] = i;
			else P[i][j] = ((i%M)*(P[i-1][j-1]%M))%M;
		}
	}
	int t; cin >> t;
	while(t--)
		Solve();
}




