#include <bits/stdc++.h>
using namespace std;
int t;
long n;
int main()
{
	cin>>t; 
	while(t--)
	{ 
		cin>>n;
		int dem = 0, k =0;
		for(long i=2;i<=sqrt(n);i++)
	  	{ 
	  		
	  		if(n%i==0)
	  		{
			  	k++;	 
	  			int countSoMu = 0; 
	  			while(n%i==0)
	  			{ 
	  				n/=i; 
					countSoMu++;
	   			} 
	   			if (countSoMu > 1) 
	   			{
	   				dem = 1;
	   				cout << "0\n";
	   				break;
				}
	   		}
	   	}	
		if (dem == 0 && k == 2) cout << "1\n";
		if (dem == 0  && k != 2) cout <<"0\n";
	   	 
	} 
	return 0;
}

