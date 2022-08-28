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
                check = true;
                char top = st.top();
                st.pop();
                while(top != '('){
                    if(top == '+' || top == '-' || top == '*' || top == '/')
                        check = false;
                    top = st.top(); st.pop();
                }
                if(check) break;
            }
            else st.push(s[i]);
        }
        if(check) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}