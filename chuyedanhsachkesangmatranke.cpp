#include<bits/stdc++.h>

using namespace std;
int a[1001][1001];
main(){
	int n; cin >> n;
	scanf("\n");
    for(int i = 1; i <= n; i++){
        string s, tmp;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> tmp){
            a[i][stoi(tmp)] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " " ;
        }
        cout << endl;
    }
}