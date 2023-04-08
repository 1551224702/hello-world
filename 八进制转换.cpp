#include<iostream>    //°Ë½øÖÆ×ª»» 
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	int n,i=0;
	cin>>n;
	for(double p=0;p<5;p++)
	{
		i+=(n%8)*pow(10,p);
		n/=8;
	}
	cout<<i;
	return 0;
}
