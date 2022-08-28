#include<bits/stdc++.h>

using namespace std;

bool used[10000000];

void sangnguyento(){
	memset(used,true,sizeof(used));
	used[1] = used[0] = false;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(used[i]){
			for(int j = i*i; j <= 10000000; j += i){
				used[j] = false;
			}
		}
	}
}

bool check(int n){
	int max = n%10;
	n/=10;
	while(n!= 0){
		if(n%10 > max) return false;
		n/=10;
	}
	return true;
}

int main(){
	sangnguyento();
	int n,dem= 0; cin >> n;
	for(int i = 2; i <= n; i++){
		if(used[i] && check(i)){
			cout << i <<" ";
			dem++;
		}
	}
	cout << endl << dem;
}