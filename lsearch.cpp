#include<iostream>
using namespace std;
void linearsearch(int a[],int n,int x)
{
	int i,flag=0,index;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			index=i;		
		}

	}
	if(flag=1)
	{
		cout<<"element found at:"<<index;	
	}
	else
	{
		cout<<"not found\n";
	}

}
int main()
{
	int x,a[20],i,n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the search element\n";
	cin>>x;
	linearsearch(a,n,x);
return 0;
}
