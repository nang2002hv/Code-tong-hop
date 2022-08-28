#include<bits/stdc++.h>

using namespace std;

int doxang(int d, int t, vector<int> stop){
	int num = 0, vtht = 0 /*vi tri hien tai */, lastvt, n = stop.size();
	n = n-2;
	while(vtht <= n){
		lastvt =  vtht;
		while(vtht <= n && stop[vtht+1] - stop[lastvt] <= t) vtht += 1;
		if( vtht == lastvt) return - 1;
		if(vtht <= n) num += 1;
	}
	return num;
}

main(){
	int d; cin >> d; // khoang cach can di
	int t; cin >> t; // dung tich binh xang
	int n; cin >> n; // so tram xang
	vector<int> stop(n+2);
	stop.push_back(0);
	for(int i = 1 ; i <= n; i++){
		cin >> stop.at(i);
	}
	stop.insert(stop.begin()+ n+1,d);
	cout << doxang(d, t ,stop) << endl;
}