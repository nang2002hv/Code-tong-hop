#include<bits/stdc++.h>

using namespace std;

struct  NhanVien
{
    char k[15], ten[45], ns[15], gt[6];
    char qq[110],nkhd[15];
};

void nhap(NhanVien &a)
{
    cin.getline(a.ten, 45);
    cin.getline(a.gt,6);
    cin.getline(a.ns, 15);
    cin.getline(a.qq, 110);
    cin.getline(a.k, 15);
    cin.getline(a.nkhd, 15);
    int n = strlen(a.ns), k = 10;
    char s[15];
    strcpy(s,a.ns);
    for (int i = n - 1; i >= n-5; i--)
    {
    	s[k -1] = a.ns[i];
    	k--;
	}
	if ( a.ns[n-7] == '/' )
	{

		s[k-1] = a.ns[n-6] ;
		k--;
		s[k-1] = '0';
	}
	else
	{
	    s[k-1] = a.ns[n-6];
	    k--;
	    s[k-1] = a.ns[n-7];
	}
	if (a.ns[1] == '/')
	{
		s[0] = '0';
		s[1] = a.ns[0];
		s[2] = '/';
	}
	strcpy(a.ns,s);
	 n = strlen(a.nkhd), k = 10;
    strcpy(s,a.nkhd);
    for (int i = n - 1; i >= n-5; i--)
    {
    	s[k -1] = a.nkhd[i];
    	k--;
	}
	if ( a.nkhd[n-7] == '/' )
	{

		s[k-1] = a.nkhd[n-6] ;
		k--;
		s[k-1] = '0';
	}
	else
	{
	    s[k-1] = a.nkhd[n-6];
	    k--;
	    s[k-1] = a.nkhd[n-7];
	}
	if (a.ns[1] == '/')
	{
		s[0] = '0';
		s[1] = a.nkhd[0];
		s[2] = '/';
	}
	strcpy(a.nkhd,s);
}

void in(NhanVien a,int n)
{
    int dem = 0, m = n;
    while (n != 0)
	{
		dem++;
		n/=10;
	}
    for (int i = 1; i <= 5-dem; i++)
    {
        cout <<0;
    }
    cout << m<<" ";
    cout <<a.ten <<" "<< a.gt << " "<< a.ns <<" " <<a.qq<<" "<< a.k <<" "<<a.nkhd << endl;
}

void inds(NhanVien ds[50], int n)
{

    for (int i = 0; i < n; i++)
        in(ds[i],i+1);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
