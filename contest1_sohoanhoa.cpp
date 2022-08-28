#include<bits/stdc++.h>

using namespace std;

bool snt(long long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return false;
	}

	return n > 2;
}

int main(){
	long long n,dem = 0,res=1; cin >> n;

	for(long long i = 2; i <= n; i *= 2){
		res += i;
		if(i*res == n && snt(res)){
			cout <<"YES" << endl;
			dem = 1;
			break;
		}
	}
	if(dem == 0) cout << "NO" << endl;
	return 0;
}