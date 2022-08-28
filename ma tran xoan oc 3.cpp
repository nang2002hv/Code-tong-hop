#include<bits/stdc++.h>

using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
    {
    	int n, m,q;
    	cin >> n >> m >> q;
		int a[110][110], k = 0;
    	int b[12000];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		int dong = n, cot = m, p = 0;
		k = 1;
		while (k <= n*m)
   		{
   	   		for (int i = p; i < cot ; i++)
    	    {
    	        b[k-1] = a[p][i];
    	        k++;
        	}
     	   for (int i = p +1 ; i < dong ; i++)
        	{
        	    b[k-1] = a[i][cot - 1];
       	    	k++;
        	}
        	for (int i = cot - 2; i >= p; i--)
       		{
       		    b[k-1]= a[dong-1][i];
       		    k++;
       		}
        	for (int i = dong - 2; i > p; i--)
        	{
        	    b[k-1] = a[i][p];
        	    k++;
    	    }
    	    dong--; cot--;
    	    p++;
    	}
    	cout << b[q-1];
    	cout << endl;
	}
}

