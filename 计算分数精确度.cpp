#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a,b,r=1,i=0;
	scanf("%d/%d",&a,&b);
	cout<<"0.";
	while(a!=0 and i<200)
	{
		cout<<a*10/b;
		a=a*10%b;
		i++;
	}
	return 0;
}
















