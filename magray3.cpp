#include<bits/stdc++.h>

using namespace std;
/*cách chuyển đổi xâu nhị phân sang xâu gray: 
bit đầu tiên luôn giữ nguyên, kể từ bit thứ i của xâu gray sẽ bằng bit thứ i 
của xâu nhị phân XOR với bit thứ i-1 của xâu nhị phân đó 
XOR
A B  A XOR B
0 0    0
0 1    1
1 0	   1
1 1    0

*/
main(){
	int t; cin >> t;
	while(t--){
		string s, s1;
		cin >> s;
		int n = s.size();
		s1.push_back(s[0]);
		for(int i = 1; i < n; i++){
			if(s[i-1] == '0' && s[i] == '0') s1.push_back('0');
			if(s[i-1] == '1' && s[i] == '1') s1.push_back('0');
			if(s[i-1] == '1' && s[i] == '0') s1.push_back('1');
			if(s[i-1] == '0' && s[i] == '1') s1.push_back('1');
		}
		cout << s1 << endl;
	}
}