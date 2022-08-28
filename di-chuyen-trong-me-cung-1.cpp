#include<iostream>
using namespace std;
int n;
int a[100][100];
string kq="";
int dem=0;
bool ok=true;
void Try(int i,int j, string s){
	if(i==n&&j==n){
		cout<<s<<" ";
		dem++;
	}
	if(a[i+1][j]==1) Try(i+1,j,s+"D");
	if(a[i][j+1]==1) Try(i,j+1,s+"R");
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];;
			}
		}
		if(a[1][1]==0) cout<<-1;
		else{
			Try(1,1,kq);if(dem==0) cout<<-1;
		}
		cout<<endl;
		dem=0;
	}
}

