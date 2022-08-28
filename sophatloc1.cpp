#include<bits/stdc++.h>

using namespace std;

main(){
    int t; cin >> t;
    scanf("\n");
    while(t--){
        string s; getline(cin, s);
        stack<char> st;
        int n = s.size();
        bool check;
        for(int i = 0; i < n; ++i){
            if(s[i] == ')'){
                char top = st.top();
                st.pop();
                while(top != '('){
                    top = st.top(); st.pop();
                }
                if(check) break;
            }
            else st.push(s[i]);
        }
        cout << st.size()/2;
        cout << endl;
    }
    return 0;
}