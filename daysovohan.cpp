#include <bits/stdc++.h>

using namespace  std;

int mod = 1e9+7;

int n;

void nhan(long long a[2][2], long long b[2][2]){
	long long c[2][2] = {{0,0},{0,0}};
	c[0][0] = a[0][0]*b[0][0] % mod +a[0][1]*b[1][0] %mod;
	c[0][1] = a[0][0]*b[0][1] % mod +a[0][1]*b[1][1] %mod;
	c[1][0] = a[1][0]*b[0][0] % mod +a[1][1]*b[1][0] %mod;
	c[1][1] = a[1][0]*b[0][1] % mod +a[1][1]*b[1][1] %mod;
	a[0][0] = c[0][0];
	a[0][1] = c[0][1];
	a[1][0] = c[1][0];
	a[1][1] = c[1][1];
}

void dequy(long long a[2][2], int n){
	if(n <= 1) return;
	long long b[2][2] = {{1,1},{1,0}};
	dequy(a,n/2);
	nhan(a,a);
	if(n%2 != 0) nhan(a,b);
}

long long fibo(int n){
	if(n == 1) return 0;
	if( n == 2) return 1;
	else{
		long long a[2][2] ={{1,1},{1,0}};
		dequy(a,n);
		return a[0][1];
	}

}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		cout << fibo(n) << endl;
	}
}
