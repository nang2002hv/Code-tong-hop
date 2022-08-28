#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n , s, m;
		cin >> n >> s >> m;
		if(m*s > n*(s-s/7)) cout <<"-1"<<endl;
		else{
			if((s*m)%n==0) cout <<s*m/n<<endl;
			else cout <<s*m/n+1<<endl;
		}
	}
}