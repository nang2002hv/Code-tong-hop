#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n, m ; cin >> n; // 37
	m = sqrt(n); //  6,1 ~~ 6;
	if(m*m == n) cout <<"YES" << endl;
	else cout <<"NO" << endl;
	return 0;
}