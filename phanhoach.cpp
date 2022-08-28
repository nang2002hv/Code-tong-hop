#include<bits/stdc++.h>

using namespace std;

class ThucPham {
	public :
	string maso;
	double gram, tongcalo,tilecalo;
	public :
		void nhap(string maso, double gram, double tongcalo, double tilecalo){
			this->maso = maso;
			this->gram = gram;
			this->tongcalo = tongcalo;
			this->tilecalo = tilecalo;
		}

		double tratilecalo(){
			return this->tilecalo;
		}

		void in(){
			cout << this -> maso <<" " << this-> gram <<" ";
			cout << this -> tongcalo <<" " << this -> tilecalo << endl; 
		}
};



bool cmp(ThucPham a, ThucPham b){
	return a.tratilecalo() < b.tratilecalo();
}


int main(){
	int n; cin >> n ; // nhap so san pham;
	vector<ThucPham> vt;
	for(int i = 0; i < n; i++){
		ThucPham a;
		string s; cin >> s; // ma so lien nên nhập bằng cin;
		double gram,tongcalo; cin >> gram >> tongcalo;
		a.nhap(s,gram,tongcalo,gram*9/tongcalo);
		vt.push_back(a);
	}
	sort(vt.begin(),vt.end(), cmp);
	vt[0].in();
	vt[n-1].in();
}