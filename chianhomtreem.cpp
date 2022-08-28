#include<bits/stdc++.h>

using namespace std;

int luachontoiuu(vector<float> treem){
	sort(treem.begin(), treem.end());
	int sonhom = 0;
	size_t i = 0;
	while(i < treem.size()){
		int l = treem[i]; int r = l+1;
		sonhom++;
		i++;
		while(i < treem.size() && treem[i] <= r) i++;
	}
	return sonhom;
}

main(){
	int n; cin >> n; // so tre em;
	vector<float> treem(n);
	for(size_t i = 0; i < treem.size(); i++){
		cin >> treem[i];
	}
	int sonhom = luachontoiuu(treem);
	cout << sonhom;
}