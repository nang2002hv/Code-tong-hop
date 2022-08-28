#include<bits/stdc++h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		deque <int> de;
		while(n--){
			int m; cin >> m;
			if(m == 1) cout << de.size() << endl;
			if(m == 2 && de.size() != 0) cout << "NO" << endl; 
			else if(m == 2 && qe.size() == 0) cout <<"YES" << endl;
			if(m== 3){
				int x; cin >> x;
				qe.push_back(x);
			}
			if( m == 4) if(qe.size() != 0) qe.pop();
			if( m == 5) 
		}
	}
}