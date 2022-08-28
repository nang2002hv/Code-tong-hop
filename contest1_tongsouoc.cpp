#include<bits/stdc++.h>

using namespace std;

long long tong(long long n){
	long long res = 0;
	for(int i = 1 ; i <= sqrt(n); i++){
		if(n% i == 0){
			res+= n/i;
			res+=i;
			if(i*i == n) res -=i;
		}
	}
	return res;
}

int main(){
	long long n; cin >> n;
	cout << tong(n) << endl;
	return 0;
}
