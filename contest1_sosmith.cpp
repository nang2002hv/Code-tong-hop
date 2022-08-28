#include<bits/stdc++.h>

using namespace std;

bool snt(long long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n > 2;
}

int tongcs(long long n){
	int res = 0;
	while(n != 0){
		res += n%10;
		n /= 10;
	}
	return res;
}

bool slove(long long n){
	if(snt(n)) return false;
	int ans = 0;
	long long tmp = n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				ans += tongcs(i);
				n /= i;
			}
		}
	}
	if(n > 1) ans += tongcs(n);
	if(tongcs(tmp) == ans ) return true;
	else return false;
}

int main(){
	long long n; cin >> n;
	slove(n) ? cout << "YES" << endl : cout << "NO"  << endl;
	return 0;
}