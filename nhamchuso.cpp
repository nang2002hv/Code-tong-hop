#include<bits/stdc++.h>

using namespace std;

string chuyenhoa2(int b){
	string s = to_string(b);
	for (int i = 0; i < s.size(); i++){
		if (s[i] =='6') s[i] = '5';
	}
	return s;
}

string chuyenhoa1(int a){
	string s = to_string(a);
	for (int i = 0; i < s.size(); i++){
		if(s[i] == '5') s[i] = '6';
	}
	return s;
}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a, b, c,d;
	cin >> a >>  b;
	string s1,s2;
	s1 = chuyenhoa2(a);
	c = stoi(s1);
	s1 = chuyenhoa2(b);
	d = stoi(s1);
	cout << c+d<< " "; 
	s2 = chuyenhoa1(a);
	c = stoi(s2);
	s2 = chuyenhoa1(b);
	d = stoi(s2);
	cout << c + d << endl;
}