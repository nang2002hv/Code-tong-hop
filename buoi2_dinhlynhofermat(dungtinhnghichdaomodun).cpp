#include<bits/stdc++.h>

using namespace std;
// dk : a khong chia het cho m, m la so nguyen to
long long powmod(int a, int b){
	if(b== 0) return 1;
	long long res = powmod(a, b/2);
	long long tmp = res*res;
	if(b % 2 == 1) tmp = tmp*a;
	return tmp;
}

main(){
	int a, p; cin >> a >> p;
	cout << powmod(a,p-2) << endl;
}