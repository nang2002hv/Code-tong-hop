#include <iostream>
using namespace std;
char bc[30][30];
int N = 20;
char luot_di = 'X';
void KhoiTaoBan(int N);
void VeBanCo(int N);

int main() 
{
  KhoiTaoBan(N);
  do
  { 
    system("clear");
    VeBanCo(N);
    
    cout<<"Moi ben "<<luot_di<<" di\n";
    int x, y;
    do
    {
      cout<<"Moi nhap toa do di: ";
      cin>>x>>y;
    } while (x<1 || x>N ||y<1 || y>N || (!(bc[x-1][y-1] == '-')));
    bc[x-1][y-1] = luot_di;
    if (luot_di == 'X')
      luot_di = 'O';
    else
      luot_di = 'X';
  } while (1);  
}
void KhoiTaoBan(int N)
{
  for(int i = 0; i<N; i++)
    for(int j = 0; j<N; j++)
      bc[i][j] = '-';  
}
void VeBanCo(int N)
{
  cout<<"     ";
  for(int j = 0; j<N; j++)
  {  
    cout<<j+1<<" ";
    if (j<9)
      cout<<" ";
  }
  cout<<endl;
  for(int i = 0; i<N; i++)
  {
    cout<<i+1<<"   ";
    if (i<9)
      cout<<" ";
    for(int j = 0; j<N; j++)
    {
      cout<<bc[i][j]<<"  ";
    }
    cout<<endl;
  }
}