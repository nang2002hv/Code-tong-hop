#include<bits/stdc++.h>

 using namespace std;

 main(){
 	int m; cin >> m;
 	vector<int> x1(m+1), x2(m+1);
 	vector<vector<int>> k1,k2;
 	for(int i = 1; i <= m; i++){
 		x1[i] = i;
 		x2[i] = 1;
 	}
 	while(1){
 		k1.push_back(x1);
 		int ok = 0;
 		for(int i = m-1; i >= 1; i--){
 			if(x1[i] < x1[i+1]){
 				ok = 1;
 				sort(x1.begin()+i+1,x1.end());
 				for(int j = i+1; j <= m; j++){
 					if(x1[j] > x1[i]){
 						swap(x1[i], x1[j]);
 						break;
 					}
 				}
 				break;
 			}
 		}
 		if(ok == 0)
 			break;
 	}
 	while(1){
 		k2.push_back(x2);
 		int ok = 0;
 		for(int i = m; i >= 1; i--){
 			if(x2[i] != m){
 				ok = 1;
 				x2[i]++;
 				for(int j = i+1; j <= m; j++)
 					x2[j] = 1;
 				break;
 			}
 		}
 		if(ok == 0)
 			break;
 	}
 	for(size_t i = 0; i < k1.size(); i++){
 		for(size_t j = 0; j <k2.size(); j++){
 			for(int k = 1; k <= m; k++)
 				cout << (char)(k1[i][k]+'A'-1);
 			for(int k = 1; k <= m; k++)
 				cout << k2[j][k];
 			cout << endl;
 		}
 	} 
}