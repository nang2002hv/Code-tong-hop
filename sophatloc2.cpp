#include <bits/stdc++.h>

using namespace std;
bool cmp(string a, string b){
    if(a.size() >= b.size()) return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int t;
    cin >> t;
    while (t--)
    {
        size_t n;
        cin >> n;
        queue<string> dq;
        stack<string> ans;
        vector<string> vt;
        dq.push("6");
        dq.push("8");
        while (dq.size())
        {
            string k = dq.front();
            ans.push(k);
            dq.pop();
            if (k.size() != n)
            {
                dq.push(k + "6");
                dq.push(k + "8");
            }
        }
        while (ans.size())
        {
            vt.push_back(ans.top());
            ans.pop();
        }
        sort(vt.begin(),vt.end(), cmp);
        reverse(vt.begin(), vt.end());
        for(auto it : vt){
            cout << it <<" ";
        }
        cout << endl;
    }
}