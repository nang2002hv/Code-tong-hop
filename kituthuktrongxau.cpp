#include<bits/stdc++.h> 
using namespace std; 
int main (){ 
	int t; cin>>t; 
	while(t--){ 
		int n; long long k; cin>>n>>k; 
		long long len =pow(2,n)/2;
		string a="ABCDEFGHIJKLMNOPQRSTUVWXY";
		while(1){ 
			if(n==1){ 
				cout<<a[0]; break; 
			} 
			if(len==k){ 
				cout<<a[n-1]; break; 
			} 
			if(k>len){ 
				k=len-(k-len); 
			}
			n--; len/=2; 
		} 
		cout<<endl;
	}
} 