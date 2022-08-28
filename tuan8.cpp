#include <iostream>
using namespace std;
int main(){
    int so_tang, so_phong_tren_tang, so_phong_duoc_dung_tren_tang;
    int tong_so_phong_duoc_dung = 0, tong_so_phong_k_duoc_dung = 0, tong_so_phong = 0;
    cout<<"nhap so tang cua khach san ";
    cin>>so_tang;
    while(so_tang < 1)
    {
      cout<<"khong chap nhan so tang nho hon 1 "<<endl;
      break;
    }
    for(int i=0;i< so_tang;i++)
    {
      if((i+1)==13)
      {
        cout<<"bo qua tang 13 "<<endl;
      }
      else
      {
        cout<<" so phong tren tang "<<i+1 <<endl;
        cin>>so_phong_tren_tang;
        if(so_phong_tren_tang < 10)
        {
          cout<<"nhap so tang lon hon 10 "<<endl;
        }
        else
        {
          tong_so_phong += so_phong_tren_tang;
          cout<<"so phong dc dung tren tang "<<i+1<<endl;
          cin>>so_phong_duoc_dung_tren_tang;
          tong_so_phong_duoc_dung+=so_phong_duoc_dung_tren_tang;
        }

      }
    }
    tong_so_phong_k_duoc_dung=tong_so_phong-tong_so_phong_duoc_dung;
    cout<<"tong so phong la "<<tong_so_phong<<endl;
    cout<<"tong so phong duoc dung la "<<tong_so_phong_duoc_dung<<endl;
    cout<<"tong so phong khong duoc dung la "<<tong_so_phong_k_duoc_dung<<endl;
    float a = (float)(tong_so_phong_duoc_dung/tong_so_phong)*100;
    cout<<"ti le dung la "<<a<<"%"<<endl;
return 0 ;
