#include<bits/stdc++.h>

using namespace std;

bool stn(int n){
	int res = 0,tcs = 0, tmp = n, dem = 0;
	while(n != 0){
		int a = n%10;
		tcs += a;
		res = res*10 + a;
		if(a == 6) dem = 1;
		n /= 10;
	}
	if(tcs % 10 == 8 && dem == 1 && res == tmp) return true;
	return false;
}

int main(){
	int a, b; cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(stn(i)) cout << i <<" ";
	}
	return 0;
}