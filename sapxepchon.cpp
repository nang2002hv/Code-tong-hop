
#include <iostream>
using namespace std;

void xuat(int arr[], int n)
{
	for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;
	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++) 
		{
			if (arr[j] < arr[min_idx]) 
			{
				min_idx = j;
			}
		}  
		cout<< "Buoc "<< i+1 << ": ";
		swap(arr[min_idx], arr[i]);
		xuat(arr, n);
	}
}
int main()
{
		int n;
		cin>>n;
		int arr[n-1];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		selectionSort(arr, n);	
}
