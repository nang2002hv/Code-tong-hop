#include<bits/stdc++.h>

using namespace std;

main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
    	cin.ignore();
        char s1[1000000];
        cin.getline(s1,1000000);
        char s2[100];
        if (strlen(s1) < 26)
		{
			cout << 0 <<endl ;
		 } 
        else 
		{
			int m;
       	 	cin >> m;
        	int n = m;
        	int dem = 0, a = strlen(s1);
        	for (int i = 0; i < 26; i++)
        	{
        	    s2[i] = 'a' + i;

        	    for (int j = 0; j < a; j++)
        	    {
         	       if (s2[i] == s1[j])
         	       {
         	           dem++;
            	        break;
            	    }
            	}
        	}
        	cout << dem << endl;
        	if ( dem <= n) cout << 1 << endl;
        	else cout << 0 << endl;
		}
    }
}
