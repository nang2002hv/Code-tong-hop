#include<bits/stdc++.h>

using namespace std;



int main(){
	map <int,int> mp;
	mp.insert({1,2});
	mp.insert({3,2});
	mp.insert({4,1});
	mp.insert({9,2});
	mp.insert({5,2});
	mp.insert({1,2});
	sort(mp.begin(), mp.end(), greater<pair<int,int>>());
}