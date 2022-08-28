#include<bits/stdc++.h>

using namespace std;

main(){
    int n; cin >> n;
    int a[100005];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    long long b, c,d ,e;
    b = a[0]*a[1];
    c = a[n-1]*a[n-2];
    d = a[0]*a[1]*a[2];
    e = a[n-1]*a[n-2]*a[n-3];
    f = a[0]*a[1]*a[n-1];
    vector<long long> v;
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);
    v.push_back(f);
    cout << *max_element(v.begin(),v.end());
}