#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long luythua(long long a, long long b){
	long long res = 1;
	while(b){
		if (b%2 == 1){
			res = res *a;
			res %= m;
		}
		b/=2;
		a*=a;
		a %=m;
	}
	return res;
}

long long chuyen(long long n){
	long long s=0;
	while(n!=0){
		int p=n%10;
		s=s*10+p;
		n/=10;
	}
	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	long long n,k;
	cin>>n;
	k=chuyen(n);
	cout<<luythua(n,k)<<endl;
	}
}
