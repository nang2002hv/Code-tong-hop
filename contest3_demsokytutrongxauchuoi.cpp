#include<bits/stdc++.h>

using namespace std;

main(){
	int numbercharacter=0,thenumber=0;
	string s;
	getline(cin, s);
	int a = s.length();
	for(size_t i = 0; i < s.length(); i++){
		if( (isalpha(s[i])))
			numbercharacter++;
		else if(isdigit(s[i])) thenumber++;
	}
	cout << numbercharacter <<" " << thenumber <<" " <<a-numbercharacter - thenumber-1;
}
