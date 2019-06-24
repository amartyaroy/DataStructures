#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
	int min,temp;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}	
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	cout<<"sorted\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[20],i,n;
	cout<<"enter the size:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selectionsort(a,n);
return 0;
}
