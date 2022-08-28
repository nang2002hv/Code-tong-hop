#include<bits/stdc++.h>

using namespace std;

int fopt;
int cost;
int c[20][20];
int cmin;

void Try(int a[], int n, int used[], int i){
	for (int j = 2; j <= n; j++){
		if (!used[j]){
			a[i] = j;
			used[j] = 1;
			cost = cost+ c[a[i-1]][a[i]];
			if ( i == n-1){
				fopt = min(fopt, cost + c[a[i]][1]);
			}
			else if (cost  < fopt){
				Try(a, n, used, i+1);
			}
			cost = cost - c[a[i-1]][a[i]];
			used[j] = 0;
		}
	}
}

main(){
	int n; cin >> n; 
	cmin = 1e9;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> c[i][j];
			if(cmin > c[i][j] && i != j) cmin = c[i][j];
		}
	}
	int a[n];
	a[0] = 1;
	int used[n+1] = {0};
	used[1] = 1;
	fopt = 1e9;
	cost = 0;
	Try(a, n, used,1);
	cout << fopt;
}