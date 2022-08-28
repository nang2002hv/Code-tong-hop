#include<bits/stdc++.h>

using namespace std;
/*
cho so tu nhien va so nguyen to p. tim x max sao cho n! chia het cho p^x 
n! = n*(n-1)...3*2*1.
kiem tra xem co bao nhieu so trong n!(n,n-1,..,3,2,1) chia het cho p;

*/
int degendre(int n, int p){
	int res = 0;
	for(int i = p; i <= n; i *= p){
		res += n/i;
	}
	return res;
}

main(){
	int n, m; cin >> n >> m;
	int dem = 0;
	for(int i = m; i <= n; i+=m){
		if(i % m == 0){
			int tmp = i;
			while(tmp % m == 0){
				dem++;
				tmp /= m;
			}
		}
	}
	cout << dem << endl;
	cout << n << " " << m << endl;
	cout << degendre(n,m) << endl;
}