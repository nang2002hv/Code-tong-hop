#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],dem;
bool ok[1001][1001];
int n;
vector <string> v;
void Try(int i,int j,string s)
{
	if(a[1][1]==0 || a[n][n]==0) return ;
	if(i==n&&j==n)
	{
		dem++;
		v.push_back(s);
	}
	if(a[i+1][j]==1 && i!=n &&!ok[i+1][j])
	{
		ok[i][j]=true;
		Try(i+1,j,s+"D");
		ok[i][j]=false;
	}
	if(a[i][j+1]==1 && j!=n &&!ok[i][j+1])
	{
		ok[i][j]=true;
		Try(i,j+1,s+"R");
		ok[i][j]=false;
	}
	if(a[i][j-1]==1 && j!=1 &&!ok[i][j-1])
	{
		ok[i][j]=true;
		Try(i,j-1,s+"L");
		ok[i][j]=false;
	}
	if(a[i-1][j]==1 && i!=1 &&!ok[i-1][j])
	{
		ok[i][j]=true;
		Try(i-1,j,s+"U");
		ok[i][j]=false;
	}
}
void kt()
{
	dem=0;
	v.clear();
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			ok[i][j]=false;
		}
	}
	Try(1,1,"");
	if(v.size()==0) cout<<-1<<endl;
	else
	{
		cout<<dem<<" ";
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";	
		}
		cout<<endl;
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		kt();
	}
}