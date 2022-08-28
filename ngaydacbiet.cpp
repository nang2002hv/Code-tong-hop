#include<bits/stdc++.h>

using namespace std;

int a[25];
string s;
set<string> st;

bool kt(){
	string s1 = s;
	if (s[4] != '2') return false;
	if(s[0] == '0' && s[1] == '0') return false;
	if (s[2] !='0') return false;
	if (s[3] != '2') return false;
	return true;
}

void in(){
	s ="";
	for (int i = 1; i <= 8; i++){
		if (a[i] == 1) s+="2";
		else s+="0";
	}
	if(kt()){
		s.insert(2,"/");
		s.insert(5,"/");
		st.insert(s);
	}
	
}

void Try(int i){
	for (int j = 0; j <= 1; j++){
		a[i] = j;
		if (i == 8){
			in();
		}
		else Try(i+1);
	}
}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	Try(1);
	for(auto it :st){
		cout << it << endl;
	}
}