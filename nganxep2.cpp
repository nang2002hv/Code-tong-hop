#include<bits/stdc++.h>

using namespace std;

stack <int> st;

main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		if( s =="PUSH"){
			int n;
			cin >> n;
			st.push(n);

		}		
		if( s =="POP" && st.size() != 0){
			st.pop();
		}		
		if( s =="PRINT" && st.size() != 0){
			cout << st.top() << endl;
		}
		if(st.size() == 0 && s =="PRINT"){
			cout << "NONE" << endl;
		}
	}
}