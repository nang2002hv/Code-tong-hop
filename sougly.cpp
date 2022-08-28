#include<bits/stdc++.h>
using namespace std;
#define int long long
int U[10005];

void QHD() {
	int i2=0, i3=0, i5=0;
	U[0] = 1;
	for(int i=1; i<=10000; i++) {
		U[i] = min(U[i2]*2, min(U[i3]*3, U[i5]*5));
		if(U[i] == U[i2]*2) i2++;
		if(U[i] == U[i3]*3) i3++;
		if(U[i] == U[i5]*5) i5++;
	} 
}

void Solve() {
	int n; cin >> n;
	cout << U[n-1] << endl;
}

main() {
	QHD();
	int t; cin >> t; 
	while(t--)
		Solve();
}




