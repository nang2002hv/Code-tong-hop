#include <bits/stdc++.h>
using namespace std;

long snt(long n)
{
	if (n < 2 ) return 0;
	for ( long i = 2; i <= sqrt(n); i++)
	{
		if ( n % i == 0)  return 0;
	}
	return 1;
}

long  kt(long n)
{
	long  s = 0;
	while (n != 0)
	{
		s = s + n%10;
		n = n/10;
	}
	return s ;
}

int main()
{
	int t;
	long n; 
	cin >> t; 
	while(t--)
	{ 
		long s = 0;
		cin>>n;
		long m = n;
		for(long i=2;i<=sqrt(n);i++)
	  	{ 
	  		if(n%i==0)
	  		{	 
	  			 
	  			while(n%i==0)
	  			{ 
	  				n/=i; 
					s = s + kt(i);
					
	   			} 
	   		}
	   			
	   	}
		if (n > 1) s = s +kt(n);
		if (kt(m) == s && snt(m) != 1)  cout << "YES\n";
		else cout << "NO\n"; 
	} 
	return 0;
}
