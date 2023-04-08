#include<iostream>    //½øÖÆ×ª»» 
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	int t,n,r;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		cin>>n>>r;
		int i=0;
		for(double p=0;p<20;p++)
		{
			i+=(n%r)*pow(10,p);
			n/=r;
		}
		cout<<i<<'\n';
	}
	return 0;
}
