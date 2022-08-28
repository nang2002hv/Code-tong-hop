#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	if(n % 4 == 0){
		int tmp = n /4;
		for(int i = 0; i < tmp; i++){
			cout << 4;
		}
		return 0;
	}
	if(n % 7 == 0){
		int tmp = n /7;
		for(int i = 0; i < tmp; i++){
			cout << 7;
		}
		return 0;
	}
	vector<int> vt;
	while(n >= 4){
		if(n-7 >= 0){
			vt.push_back(7);
			n -= 7;
		} else {
			if(n-4 >= 0){
				vt.push_back(4);
				n -= 4;
			}
		}
	}
	if(n != 0){
		cout << -1;
		return 0;
	} else {
		reverse(vt.begin(), vt.end());
		for(auto x : vt){
			cout << x;
		}
		return 0;
	}
}