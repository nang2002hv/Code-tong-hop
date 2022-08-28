#include<bits/stdc++.h>

using namespace std;

bool used[10000001];

bool snt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return false;
	}
	return n > 1;
}


void sangnguyento(){
	used[0] = used[1] = false;
	for(int i = 2; i <= 10000000; i++){
		used[i] = true;
	}
	for(int i = 2; i <= sqrt(10000000); i++){
		if(used[i]){
			for(int j = i*i; j <= 10000000; j += i){
				used[j] = false;
			}
		}
	}
}

bool tachchuso(int n){
	while(n!=0){
		int a = n % 10;
		if(!snt(a)) return false;
		n /= 10;
	}
	return true;
}

int main(){
	sangnguyento();
	int n, m, dem = 0; cin >> n >> m;
	for(int i = n; i <= m; i++){
		if(used[i] && tachchuso(i)){
			dem++;
		}
	}
	cout << dem;
	return 0;
}