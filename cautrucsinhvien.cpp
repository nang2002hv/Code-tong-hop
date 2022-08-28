#include<bits/stdc++.h>

using namespace std;

struct SinhVien 
{
	string ten, lop, ns, msv="N20DCCN001";
	float gpa;	
};

void chuanhoa(SinhVien &a)
{
	string tmp = a.ns;
	if (tmp[2] != '/') tmp = "0" + tmp;
	if (tmp[5] !='/' ) tmp.insert(3,"0");
	a.ns = tmp;
}

void nhapThongTinSV(SinhVien &a)
{
	getline(cin, a.ten);
	cin >> a.lop;
	cin >> a.ns;
	cin >> a.gpa;
	chuanhoa(a);
}


void inThongTinSV(SinhVien &a)
{
	cout << a.msv <<" " << a.ten << " " << a.lop <<" " << a.ns <<" " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
