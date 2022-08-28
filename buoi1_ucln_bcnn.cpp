#include<bits/stdc++.h>

using namespace std;

// ham uoc chung lon nhat gcd(a,b) = gcd(b,a%b);
/*
	gcd ={a,b =0} or{ gcd(b,a%b)}
*/

using ll = long long;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

main(){
	int n, m; cin >> n >>m;
	cout << gcd(n,m) << endl;
}