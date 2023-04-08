
#include<iostream>           //Ñî»ÔÈı½Ç 
#include<string.h>
using namespace std;

int main()
{
	int n,j;
	cin>>n;
	int a[n],b[n];
	b[0]=1,b[1]=1;
	int i;
	if(n==0)
	{
		cout<<0;
	}
	if(n==1)
	{
		cout<<1;
	}
	if(n==2)
	{
		cout<<1<<'\n'<<1<<' '<<1;
	}
	if(n>2)
	{
		cout<<1<<'\n'<<1<<' '<<1<<'\n';
		for(i=3;i<n+1;i++)
		{
			a[0]=1;
			a[i-1]=1;
			cout<<1<<' ';
			for(j=1;j<i-1;j++)
			{
				a[j]=b[j-1]+b[j];
				cout<<a[j]<<' ';
			}
			cout<<1<<'\n';
			for(j=0;j<i;j++)
			{
				b[j]=a[j];
			}
		} 
	}
	return 0;
}




