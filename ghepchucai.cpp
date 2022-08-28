#include<bits/stdc++.h>
using namespace std;

char a[100], c;
int n;
bool used[100];

bool kt(){
	if(c < 'E'){
		for(int i = 1; i <= n; i++){
			if(a[i] == 'A' &&  i < n && i > 1) return false;
		}
		return true;
	} else{
		if(a[n-1] =='A' && a[n] =='E') return true;
		if(a[n-1] =='E' && a[n] =='A') return true;
		if(a[1] =='E' && a[2] =='A') return true;
		if(a[1] =='A' && a[2] =='E') return true;
		for(int i = 2; i < n; i++){
			if(i > 1 && i < n){
				if(a[i] =='A' && a[i+1] =='E') return true;
				if(a[i] =='E' && a[i+1] == 'A' )return true;
				if(a[i] =='A' || a[i] == 'E') return false;
			}
		}
		return true;
	}
}

void in()
{
	if(kt()){
		for( int i = 1; i <= n; i++ )
        	cout << a[i];
    	cout << endl;
	}
}

void Try(int i){
	for(int j = 'A'; j <= c; j++){
		if(!used[j]){
			a[i] = (char)j;
			used[j] = true;
			if(i == n) in();
			else Try(i+1);
			used[j] = false;
		}
	}
}

main(){
	cin >> c;
	n = c-'A'+1;
	memset(used,false,sizeof(used));
	Try(1);
}