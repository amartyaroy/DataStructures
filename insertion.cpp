#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
	int value,hole;
	for(int i=1;i<=n-1;i++)
	{
		value=a[i];
		hole=i;
		while(hole>0 && a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole=hole-1;
		}
		a[hole]=value;	
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
	insertionsort(a,n);
return 0;
}
