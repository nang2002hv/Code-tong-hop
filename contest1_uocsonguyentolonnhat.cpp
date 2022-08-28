#include<bits/stdc++.h>

using namespace std;

bool used[10000000];


void sangnguyento(){
	memset(used,true,sizeof(used));
	used[0] = used[1] = false;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(used[i])
			for(int j = i*i; j <= 10000000; j += i)
				used[j] = false;
	}
}

int main(){
	sangnguyento();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ans = INT_MAX;
		for(int i = 2; i <= n; i++){
			if(used[i]){
				if(n % i == 0)
					ans = i;
			}
		}
		cout << ans << endl;
	}
}