#include<bits/stdc++.h>

using namespace std;

class SinhVien
{
	private:
		int stt;
		string ten,l,ns;
		float d;

	public:

		friend istream& operator >> (istream &in, SinhVien&);
		friend ostream& operator << (ostream &out, SinhVien);

};

int k=0;
istream& operator >> (istream &in, SinhVien &a)
{
	in.ignore();
	k++;
	a.stt=k;
	getline(in,a.ten);
	in>>a.l;
	in>>a.ns;
	if (a.ns[1]=='/') a.ns="0"+a.ns;
	if (a.ns[4]=='/') a.ns.insert(3,"0");
	in>>a.d;
	return in;
}

ostream& operator << (ostream& out,SinhVien a)
{
	cout<<"B20DCCN0";
	if (a.stt<10)
	cout<<"0";
	cout<<a.stt<<" "<<a.ten<<" "<<a.l<<" "<<a.ns<<" "
	<<fixed<<setprecision(2) <<a.d<<endl;
	return out;
}

int main(){
	SinhVien ds[50];
	int N, i;
	cin >> N;
	for(i=0;i<N;i++){
	cin >> ds[i];
	}
		for(i=0;i<N;i++){
		cout << ds[i];
	}
	return 0;
}