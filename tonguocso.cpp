#include<bits/stdc++.h>

using namespace std;

int a, b, sum;

bool ktnt(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n%i == 0) return false;
	}
	return true;
}

bool kt(int n){
	sum = 1;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			if (n /i == i) sum += i;
			else {
				sum += i; 
				sum += n/i;
			}
		}
	}
	if ( sum > n) return true;
	return false;
}

void solve(){
	int dem  = 0;;
	for (int i = a; i <= b; i++){
		if ( ktnt(i)){
			if (kt(i))
			{
				dem++;
			}
		}
	}
	cout << dem;
}

main(){
	cin >> a >> b;
	solve();
}