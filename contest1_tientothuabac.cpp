#include<bits/stdc++.h>

using namespace std;

long long solve(long long n, long long p){
	long long res = 0;
	for(long long i = p; i <= n; i *= p)
		res += n/i;
	return res;
}

int main(){
	long long n, p; cin >> n >> p;
	cout << solve(n, p);
	return 0;
}