#include<bits/stdc++.h>

using namespace std;

int xuly(long long n){
	int dem = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n% i ==0){
			int mu = 0;
			while(n % i == 0){
				mu++;
				n /= i;
			}
			dem *= (mu+1);
		}
	}  
	if(n > 1) dem *= 2;
	return dem;
}

int main(){
	long long n; cin >> n;
	cout << xuly(n) << endl;
	return 0;
}