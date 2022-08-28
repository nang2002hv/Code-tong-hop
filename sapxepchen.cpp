#include<bits/stdc++.h>

using namespace std;

main(){
	int n; cin >> n;
	int a[n+5];
	for (int i = 0; i < n; i++) cin >> a[i];
	int j, key;
	for (int i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
       cout << "Buoc " << i-1 <<": ";
       for (int k=0; k <=j; k++){
       	cout << a[k] <<" ";
	   }
	   cout << endl;
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
   cout << "Buoc " << n-1 <<": ";
   for (int k = 0; k < n; k++){
   		cout << a[k] <<" ";
   }
   cout << endl;
} 
