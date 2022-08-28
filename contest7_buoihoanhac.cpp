#include<bits/stdc++.h>

using namespace std;

string binary_seach(int a[],int l, int r, int x){
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x) return "YES";
		else if(a[mid] < x) r = mid-1;
		else l = mid + 1;
	}
	return "NO";
}

int main(){
	int n; cin >> n;
	int a[n];
	for(auto &it : a) cin >> it;
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		cout << binary_seach(a,0,n-1,x) << endl;
	}
}