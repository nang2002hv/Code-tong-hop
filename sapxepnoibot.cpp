#include<bits/stdc++.h>

using namespace std;

main(){
	int n; cin >> n;
	int a[n+5];
	for (int i = 0; i < n; i++) cin >> a[i];
	int j,i;
	bool haveSwap;
	for (i = 0; i < n-1; i++){
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                haveSwap = true; 
            }
        }
        
        if(haveSwap == false){
            break;
        }
        cout <<"Buoc " << i+1 << ": ";
        for (int k = 0; k < n; k++){
        	cout << a[k] <<" ";
		}
		cout << endl;
    }
} 
