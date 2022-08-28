#include<bits/stdc++.h>

using namespace std;

vector <int> st;

main(){
	string s;
	while(cin >> s){
		if( s =="push"){
			int n;
			cin >> n;
			st.push_back(n);

		}		
		if( s =="pop" && st.size() != 0){
			st.pop_back();
		}		
		if( s =="show" && st.size() != 0){
			for(auto it : st){
				cout << it <<" ";
			}		
			cout << endl;
		}
		if(st.size() == 0 && s =="show"){
			cout << "empty" << endl;
		}
	}
}