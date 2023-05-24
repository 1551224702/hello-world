#include<iostream>
#include<math.h>
using namespace std;

int even(int n);


int main()
{
	int n,i,sum=0;
	for(n=1;n>0;)
	{
		cin>>n;
		if(n<=0)
		{
			break;
		}
		i=even(n);
		if(i==0)
		{
			sum+=n;
		}
	}
	cout<<sum;
	return 0;
}

int even(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


