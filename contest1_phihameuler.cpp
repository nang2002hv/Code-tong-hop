#include<bits/stdc++.h>

using namespace std;

vector<int> phantich(long long n){
	vector<int> a;
	for(int i = 2; i <= sqrt(n); i++){
		if(n% i == 0){
			a.push_back(i);
			while(n%i == 0){
				n /= i;
			}
		}
	}
	if ( n > 1) a.push_back(n);
	return a;
}

int 
}