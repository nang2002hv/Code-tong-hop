#include<bits/stdc++.h>
// so co uoc so le la so lap phuong
using namespace std;

int main(){
	long long n, m; cin >> n;
	m = sqrt(n);
	if(m*m == n) cout <<"YES" << endl;
	else cout <<"NO" << endl;
	return 0;
}