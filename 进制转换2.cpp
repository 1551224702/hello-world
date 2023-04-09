#include<iostream>    //½øÖÆ×ª»» 
#include<math.h>
using namespace std;

int main()
{
	int t,n,r,m,p,i;
	cin>>t;
	char a[100];
	char c='0';
	for(int w=0;w<t;w++)
	{
		cin>>n>>r;
		if(r>10)
		{
			char a[100];
			for(p=0;n!=0;p++)
			{
				m=n%r;
				n/=r;
				if(m<10)
				{
					a[p]=m+'0';
				}
				else
				{
					switch(m)
					{
						case 10:
							a[p]='A';
						case 11:
							a[p]='B';
						case 12:
							a[p]='C';
						case 13:
							a[p]='D';
						case 14:
							a[p]='E';
						case 15:
							a[p]='F';
					}
				}
			}
			a[p]='\0';
			for(i=p-1;i>-1;i--)
			{
				cout<<a[i];
			}
		}
		else
		{
			i=0;
			for(double h=0;n!=0;h++)
			{
				i+=(n%r)*pow(10,h);
				n/=r;
			}
			cout<<i<<'\n';
		}
	}
	return 0;
}
