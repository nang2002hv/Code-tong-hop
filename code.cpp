#include<bits/stdc++.h>

using namespace std;

vector<string> vt;

int n, k, a[20];

void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= k;j++){
        a[i] = j;
        if(i == n) in();
        else Try(i+1);
    }
}

int main(){
    cin >> k >> n;
    Try(1);

}