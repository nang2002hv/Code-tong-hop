#include<bits/stdc++.h>

using namespace std;

int a[15][15], n;
bool kt;
string kq;

void in(int m){
	for(int i = 0; i < m; i++) cout << kq[i];
	cout <<" ";
}

void Try(int i, int j, int m){
	if(j == n && i == n){
		in(m);
		kt = true;
	}
	if(a[i+1][j] == 1){
		kq[m] = 'D';
		Try(i+1,j,m+1);
	}
	if(a[i][j+1] == 1){
		kq[m] = 'R';
		Try(i, j+1, m+1); 
	}

}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		kq= "";
		kt = false;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++)
				cin >> a[i][j];
		}
		if(a[1][1] == 0 ) cout << -1;
		else Try(1,1,0);
		if(!kt) cout << -1;
		cout << endl;
	}
}