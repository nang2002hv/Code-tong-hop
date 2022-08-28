#include<bits/stdc++.h>

using namespace std;

void phantichthuasonguyento(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n% i == 0){
			// i la thua so nguyen to cua n;
			while(n%i == 0){
				cout << i << " ";
				n /= i;
			}
		}
	}
	if(n > 1){ 
		cout << n << endl;
		// day la thua so nguyen to cuoi cung cua n;
	}
}

main(){
	int n; cin >> n;
	phantichthuasonguyento(n);
}