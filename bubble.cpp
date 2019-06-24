#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
	int k,i,temp;
	for(k=0;k<n-1;k++)
	{
		for(i=0;i<n-k-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
	cout<<"sorted\n";
	for(i=0;i<n;i++)
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
	bubblesort(a,n);
return 0;
}
