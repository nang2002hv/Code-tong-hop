#include<bits/stdc++.h>

using namespace std;

int a[13];

main(){
    freopen("input.txt","r",stdin);   
    freopen("output.txt","w",stdout);
    a[1] = 1;       a[6] = 50;
    a[2] = 2;       a[7] = 100;
    a[3] = 5;       a[8] = 200;
    a[4] = 10;      a[9] = 500;
    a[5] = 20;      a[10]= 1000;
    int t; cin >> t;
    while(t--){
        int res = 0;
        int n; cin >> n;
        for (int i = 10; i >= 1;i--){
            while( a[i] <= n){
                n -= a[i];
                res ++;
            }
        }
        cout << res << endl;
    }
}