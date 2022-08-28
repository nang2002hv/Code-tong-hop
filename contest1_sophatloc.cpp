#include<bits/stdc++.h>

using namespace std;

bool kt(long long n){
	while(n!=0){
		int a = n%10;
		if(a != 0 && a!= 8 && a!= 6) return false;
		n /= 10;
	}
	return true;
}

int main(){
	long long n; cin >> n;
	if(kt(n)) cout <<"1" << endl;
	else cout <<"0" << endl;
	return 0;
}