#include<bits/stdc++.h>

using namespace std;

int a[1000005];

main(){
    //freopen("input.txt","r",stdin);   
    //freopen("output.txt","w",stdout);   
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        long long sum = 0;
        for (int i = 0; i < n; i++){
            sum += a[i]*i;
        }
        cout << sum << endl;
    }
}