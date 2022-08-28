#include<bits/stdc++.h>

using namespace std;

int a[1000005], b[1000005];
map <int, int> mp;


main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i = 0; i < n; i++){
		if(mp[a[i]] != 0){
			cout << a[i] <<" ";
			mp[a[i]] = 0;
		}
	}
	cout << endl;
}