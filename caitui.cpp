
/*
6 22
39 44 4 59 91 70 
47 26 92 33 6 69 
*/
#include<bits/stdc++.h>

using namespace std;

struct ds {
	int w,v;
};

int main(){
	int n, m; cin >> n >> m;
	ds a[n+1];
	for(int i = 1; i <= n; i++){
		cin >> a[i].w;
	}
	for(int i = 1; i <= n; i++){
		cin >> a[i].v;
	}
	int f[n+1][m+1] ={0,0};
	memset(f,0,sizeof(f));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			f[i][j] = f[i-1][j];
			if(j > a[i].w){
				f[i][j] = max(f[i][j],f[i-1][j-a[i].w]+a[i].v);
			}
		}
	}
	cout << f[n][m];
}