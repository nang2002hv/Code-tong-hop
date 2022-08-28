#include<bits/stdc++.h> 

using namespace std;



long long degendre(long long n){
	long long res = 0;
	for(long long i = 5; i <= n; i*= 5){
		res += n/i;
		res %= (1000000007);
	}
	return res;
}

int main(){
	long long n; cin >> n;
	cout <<  degendre(n) << endl;
	return 0;
}