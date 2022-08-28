#include<bits/stdc++.h>

using namespace std;

long long mod = 1e9+7;
long long a = 2;

long long luythua(long long n){
	if(n == 0) return 1;
	long long tmp = luythua(n/2);
	long long res = tmp*tmp%mod;
	if(n% 2 == 1) res = res*a % mod;
	return res;
}

int main(){
	long long n; cin >> n;
	cout << luythua(n-1);
}