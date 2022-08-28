#include<stdio.h>

using namespace std;

struct luong{
	char ht[100], ns[15],gt[10];
	double hslcb,bh,thuong,thunhap, lcb;
};

main(){
	int n;
	printf("Nhap so can bo\n");
	scanf("%d", &n);
	luong ds[1001];
	for(int i = 1; i <= n; i++){
		printf("can bo thu: %d\n", i);
		fflush(stdin);
		printf("nhap ho ten can \n");
		gets(ds[i].ht);
		printf("nhap nam sinh\n");
		gets(ds[i].ns);
		printf("nhap gioi tinh\n");
		gets(ds[i].gt);
		printf("nhap he so luong co ban\n");
		scanf("%lf", &ds[i].hslcb);		
		printf("nhap tien thuong\n");
		scanf("%lf", &ds[i].thuong);		
		ds[i].lcb =  ds[i].hslcb*2000000;
		ds[i].bh = ds[i].lcb/4;
		ds[i].thunhap = ds[i].lcb + ds[i].thuong - ds[i].bh;

	}
	for(int i = 1; i <= n; i++){
		printf("ho ten can bo: %s\n", ds[i].ht);
		printf("nam sinh : %s\n", ds[i].ns);
		printf("gioi tinh: %s\n", ds[i].gt);
		printf("luong co ban: %.4lf\n", ds[i].lcb);
		printf("thu nhap: %.4lf\n", ds[i].thunhap);
	}	
	double tongluong = 0;
	for(int i = 1; i <= n; i++){
		tongluong += ds[i].thunhap;
	}  
	printf("tong thu nhap %.4lf\n", tongluong);
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(ds[i].thunhap > ds[j].thunhap){
					luong c;
					c = ds[i];
					ds[i] = ds[j];
					ds[j] = c;
			}
		}
	}

}