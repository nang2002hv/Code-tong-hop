#include<bits/stdc++.h>

using namespace std;
map<int, int> mp;
int a[1000005];

bool kt(int x){
	if (mp[x] > 1) return false;
	return true;
}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i = 0; i < n; i++){
		if(kt(a[i])) cout << a[i] <<" ";
	}
}