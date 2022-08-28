#include<bits/stdc++.h>

using namespace std;

int xuly(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int mu = 0;
			while(n % i == 0){
				mu++;
				n /= i;
			}
			if(mu >= 2) return true;
		}
	}
	return false;
}

main(){
	int a, b; cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(xuly(i)) cout << i << " ";
	}

}