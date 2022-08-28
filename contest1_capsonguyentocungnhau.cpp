#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if( b == 0) return a;
	else return gcd(b,a%b);
}

main(){
	int a, b; cin  >> a >> b;
	for(int i = a; i <= b-1; i++){
		for(int j = i+1; j <= b; j++){
			if(gcd(i,j) == 1)
				cout << "(" << i <<","<< j <<")" << endl;
		}
	}
}
