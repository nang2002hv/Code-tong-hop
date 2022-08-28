#include<bits/stdc++.h> 

using namespace std;

long long fibo[1000005];


void fibonacci(){
	fibo[1] = 0; fibo[2] = 1;
	for(int i = 3; i <= 100; i++){
		fibo[i] = (fibo[i-1]+fibo[i-2]);
	}
}


int main(){
	fibonacci();
	long long n, dem = 0; cin >> n;
	for(int i = 1; i <= 100; i++){
		if(n == fibo[i]){
			dem = 1; cout << "YES" << endl;
			break;
		}
	}
	if(dem == 0) cout <<"NO" << endl;
	return 0;
}