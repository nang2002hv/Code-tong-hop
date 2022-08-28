#include<bits/stdc++.h>

using namespace std;
/*

a^b= {b == 0  return 1} or {if b le thi nhan them a : tmp*tmp*a} or{if b chan thi tmp*tmp}
*/
 // do phu tap log2(b)

long long mod = 1e9+7;

long long pow1(long long a, long long b){
	if(b == 0) return 1;
	long long tmp = pow(a, b/2);
	long long res = tmp*tmp;
	if(b % 2 == 1) res = res*a%mod;
	return res%mod;

}
main(){
	int a, b; cin >> a >> b;
	cout << pow1(a,b) << endl;
}