#include<bits/stdc++.h>

using namespace std;

bool snt(int n){
	for(int i = 2; i <= sqrt(n); i++)
		if(n% i == 0) return false;
	return n > 1;
}

bool tongnguyeto(int n){
	int res = 0;
	while(n!= 0){
		int a = n%10;
		if(a != 3 && a != 2 && a!= 5 && a != 7) return false;
		res+= a;
		n /=10; 
	}
	return snt(res);
}

int main(){
	
	int a, b; cin >> a >> b;
	int dem = 0;
	for(int i = a; i <= b; i++){
		if(tongnguyeto(i) && snt(i)) dem++;
	}
	cout << dem << endl;
	return 0;
}