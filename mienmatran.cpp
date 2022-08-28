#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
 
int main(){
	int n; cin >> n;
	int a[n+1][n+1];
	FOR(i, 1, n+1){
		FOR(j, 1, n + 1){
			cin >> a[i][j];
		}
	}
	int m; cin >> m;
	int b[m + 1][m + 1];
	FOR(i, 1, m + 1){
		FOR(j, 1, m + 1)
			cin >> b[i][j];
	}
	int tmp[n + 1][n + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			int r1 = i % m == 0 ? m : i % m;
			int r2 = j % m == 0 ? m : j % m;
			tmp[i][j] = b[r1][r2];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] * tmp[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
 
}
