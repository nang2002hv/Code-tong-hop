#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		int a[100005], b[100005], c[100005];
		for (int i = 0; i < n1; i++) cin >> a[i];
		for (int i = 0; i < n2; i++) cin >> b[i];
		for (int i = 0; i < n3; i++) cin >> c[i];
		int i=0, j=0, k=0;
		int check = 0;
   		while(i<n1 && j<n2 && k<n3) {
            if (a[i]==b[j] && b[j]==c[k]) {
                cout << a[i] << " ";
                i++; j++; k++; check++;
            }
            else if (a[i]<b[j])
                i++;
            else if (b[j]<c[k])
                j++;
            else
                k++;
        }
        if (check==0) cout << "NO";
        cout << endl;
    }
}