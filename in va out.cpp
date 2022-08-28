#include<bits/stdc++.h>
using namespace std;
#define a() a
class SinhVien
{
  private :
    string ten,lop,ngaysinh,masinhvien;
    float gpa;
  public:
    friend istream& operator >>(istream& in, SinhVien &);
    friend ostream& operator <<(ostream& xuat, SinhVien);
};
istream& operator >>(istream& cin, SinhVien &a){
  getline(cin,a.ten);
  cin>>a.lop>>a.ngaysinh>>a.gpa;
  if(a.ngaysinh[2]!='/') a.ngaysinh= "0"+a.ngaysinh;
  if(a.ngaysinh[5]!='/') a.ngaysinh.insert(3,"0");
  a.masinhvien="B20DCCN001";
   return cin;
}
ostream& operator << (ostream& cout, SinhVien a){
	cout<<a.masinhvien<<" "<<a.ten<<" "<<a.lop<<" "<<a.ngaysinh<<" ";
  	cout<<fixed<<setprecision(2)<<a.gpa;
	return cout;
}
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
