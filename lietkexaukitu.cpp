#include<bits/stdc++.h>

using namespace std;

int a[11],n;

void in(int n){
	cout <<"(";
	for(int i = 1; i < n; i++) cout << a[i] <<" ";
	cout << a[n];
	cout <<") ";
}

void Try(int k, int i, int sum){
	for (int j = k; j >= 1; j--){
		if (sum + j <= n){
			a[i] = j;
			if (sum + j == n) in(i);
			else Try(j, i+1,sum+j);
		}
	}
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(n,1,0);
		cout << endl; 
	}
} 
