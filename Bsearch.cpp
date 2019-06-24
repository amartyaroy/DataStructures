#include<iostream>
using namespace std;
void binarysearch(int a[],int low,int n,int x)
{
	int i,mid,high;
	high=n;
	mid=(high+low)/2;
	if(a[mid]==x)
	{
		cout<<"found:"<< mid;	
	}
	else if(x>a[mid])
	{
		return binarysearch(a,mid+1,high,x);	
	}
	else 
	{
		return binarysearch(a,0,mid-1,x);		
	}
	
	
}
int main()
{
	int a[20],i,x,n;
	cout<<"enter the size:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the search element:"<<endl;
	cin>>x;
	binarysearch(a,0,n,x);
return 0;
}
