#include<bits/stdc++.h>

using namespace std;
/* tai vi tri i tim so lon nhat trong doan tu n-1 den i+1 xong doi cho va k-- */

int k;
string s;

main(){
	int t; cin >> t;
	while(t--){
		cin >> k >> s;
		for(int i = 0; i < (int)s.size()-1; i++){
			char max = s[s.size()-1];
			int vt = s.size()-1;
			for(int j = s.size()-1; j >= i+1 && k > 0; j--){
				if(max < s[j]){
					max = s[j];
					vt = j;
				}
			}
			if(max > s[i] &&  k > 0){
				swap(s[i],s[vt]);
				k--;
			}
		}
		cout << s << endl;
	}
}