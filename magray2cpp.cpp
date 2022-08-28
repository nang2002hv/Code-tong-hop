#include<bits/stdc++.h>

using namespace std;
/* cach chuyen gray sang np 
bit đầu tiên luôn giữ nguyên, kê từ bit thứ i, nếu bit thứ i của mã gray là 1 thì bit thứ 
i của mã nhị phân sẽ ngược với bit (i-1) của mã nhị phân ,nếu bit thứ i của mã gray là 0 
thì bit thứ i của mã nhị phân sẽ trùng với bit (i-1) của mã nhị phân */
main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		string s1;
		s1.push_back(s[0]);
		for(int i = 1; i < n; i++){
			if(s[i] == '1'){
				if(s1[i-1] == '0') s1.push_back('1');
				else s1.push_back('0');
			} else {
				s1.push_back(s1[i-1]);
			}
		} 
		cout << s1 << endl;
	}
}