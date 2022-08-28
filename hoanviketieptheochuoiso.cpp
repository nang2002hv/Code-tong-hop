#include<bits/stdc++.h>
using namespace std;

vector <string> v;
int n, a[1005], k;

void sinh(){
	int i = n-1;
	while(a[i] >= a[i+1]){
		--i;
	}
	if(i== 0){
		cout << k <<" ";
		cout <<"BIGGEST" << endl;
	} else {
		cout << k <<" ";
		int j = n;
		while(a[i] >= a[j]) --j;

		swap(a[j],a[i]);
		int l = i+1, r=n;
		while(l < r){
			swap(a[l],a[r]);
			++l; --r;
		}
		for(int i = 1; i <= n; i++)
			cout << a[i];
		cout << endl;
	}
}

main(){

	int t; cin >> t;
	while(t--){
		v.clear();
		string s;
		cin >> k >> s;
		int i = 0;
		for(auto it : s){
			i++;
			a[i] = (int)(it-'0'); 
		}
		n = i;
		sinh();

	}
}