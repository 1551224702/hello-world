#include<iostream>

using namespace std;
int max(int m,int n);

int min(int m,int n);




int main()
{
	int m,n;
	cin>>m>>n;
	cout<<max(m,n)<<'\n'<<min(m,n);
	return 0;
} 

int max(int m,int n)
{
	int i;
	if(m<=n)
	{
		for(i=m;m%i!=0 or n%i!=0;i--)
		{
			continue;
		}
		return i;
	}
	else
	{
		for(i=n;m%i!=0 or n%i!=0;i--)
		{
			continue;
		}
		return i;
	}
}

int min(int m,int n)
{
	int i;
	if(m>=n)
	{
		for(i=m;i%m!=0 or i%n!=0;i++)
		{
			continue;
		}
		return i;
	}
	else
	{
		for(i=n;i%m!=0 or i%n!=0;i++)
		{
			continue;
		}
		return i;
	}
}















