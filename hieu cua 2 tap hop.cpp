#include<iostream>
#include<cstring>
#include<string>
using namespace std;



main ()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
    {
        char s1[200];
        char s2[200], ds1[200][100],ds2[200][100];
        
        cin.getline(s1,100);
        cin.getline(s2,100);
        int k = 0;
        char *p = strtok(s1," ");
        while (p != NULL)
        {
            k++;
            strcpy(ds1[k],p);

            p = strtok(NULL," ");
        }
        int h = 0;
        char *x = strtok(s2," ");
        while (x != NULL)
        {
            h++;
            strcpy(ds2[h],x);

            x = strtok(NULL," ");
        }
        
        for (int i = 1; i <= k; i++)
        {
        	int dem = 1;
        	for (int j = 1; j <= h; j++)
        	{
        		if (strcmp(ds1[i],ds2[j]) == 0)
        		{
        			dem = 0; break;
        			
				}
			}
			if (dem == 1) cout << ds1[i] << " ";
		}
		cout << endl;
    }
}
