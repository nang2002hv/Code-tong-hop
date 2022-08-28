#include<bits/stdc++.h>

using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        scanf("\n");
        getline(cin,s1);
        string s2;
        int m;
        cin >> m;
        int n = m;
        int dem = 0, a = s1.length();
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
        if ( dem <= n) cout << 1 << endl;
        else cout << 0 << endl;
    }
}
