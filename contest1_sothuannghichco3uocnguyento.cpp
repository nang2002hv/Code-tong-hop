#include<bits/stdc++.h>

using namespace std;

bool ptnguyento(int n){
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			dem++;
			while(n%i == 0){
				n/=i;
			}
		}

	}
	if(n > 1){
		dem++;
	}
	return dem >= 3;
}

bool stn(int n){
	int m = 0, tmp = n;
	while(n!=0){
		m = m*10 + n%10;
		n /= 10;
	}
	return tmp == m;
}

int main(){
	int a, b, dem = 0; cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(stn(i) && ptnguyento(i)){
			dem = 1;
			cout << i << " ";
		}
	}
	if(dem == 0) cout <<"-1"; 
	return 0;
}