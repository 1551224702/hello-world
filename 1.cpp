/*#include<stdio.h>
void copy(char *string_1,char *string_2);
void Strcat(char *string_1,char *string_2);
int Strcmp(char *string_1,char *string_2);

int main()
{
	int i=0,p;
	char a[100]={"yellow."},b[100]={"blue."};
	Strcat(a,b);
	copy(a,b);
	printf("%s\n",b);
	Strcat(a,b);
	printf("%s\n",a);
	p=Strcmp(a,b);
	printf("%d",p);
	return 0;
} 
 
void copy(char *string_1,char *string_2)
{
	int i=0;
	while(string_1[i]!='\0')
	{
		*(string_2+i)=*(string_1+i);
		i++;
	}
	*(string_2+i)='\0';
}


void Strcat(char *string_1,char *string_2)
{
	int i=0,x=0;
	while(string_1[i]!='\0')
	{
		i++;
	}
	while(string_2[x]!='\0')
	{
		*(string_1+i)=*(string_2+x);
		x++,i++;
	}
	*(string_1+i)='\0';
}

int Strcmp(char *string_1,char *string_2)
{
	int a=0;
	for(int i=0;;i++)
	{
		if(string_1[i]>string_2[i])
		{
			a=1;
			break;
		}
		if(string_1[i]<string_2[i])
		{
			a=-1;
			break;
		}
	}
	return a;
}*/


/*#include<stdio.h>
char *substring(const char *const s,int end);

int main()
{
	char *s;
	int p;
	scanf("%s",s);
	fflush(stdin);
	scanf("%d",&p);
	char *a=substring(s,p);
	printf("%s\n",a);
	delete []a;
	return 0;
}

char *substring(const char *const s,int end)
{
	char *pNewString=new char[end+1+1];
	int i=0;
	for(;i<end;i++)
	{
		pNewString[i]=s[i];
	}
	pNewString[i]='\0';
	return pNewString;
}*/



/*#include<stdio.h>
int main()
{
	int n,k,m,x;
	scanf("%d%d%d",&n,&k,&m);
	int p=0;
	for(int i=2;i<=n;i++)
	{
		p=(p+m)%i;
		if(i==n-1)
		{
			x=p;
		}
	}
	printf("%d %d",x,p+1);
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdio>
int main()
{
	int len,n;
	char A[100];
	scanf("%d",&n);
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		scanf("%s",A);
		for(int m=strlen(A)-1;m>-1;m--)
		{
			printf("%c",A[m]);
		}
		printf("\n");
	}
	return 0;
}*/



/*#include<stdio.h>
#include<string.h>
#include<cstdio>
int main()
{
	char A[100],B[100];
	scanf("%s",A);
	scanf("%s",B);
	int p=1,i=0;
	int x=strlen(B);
	while(A[i]!=B[i])
	{
		i++;
	}
	for(int m=1;m<x;m++)
	{
		if(A[m+i]!=B[m+i])
		{
			p=0;
		}
	}
	if(p==0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}*/



/*#include<stdio.h>
#include<string.h>
#include<cstdio>
void Delete(char *string_1,char *string_2);
void Strcat(char *string_1,char *string_2);
void fun(char *string);

int main()
{
	char A[200],B[100],C[200];
	scanf("%s%s",A,B);
	Strcat(A,B);
	Delete(A,C);
	fun(C);
	printf("%s",C);
	return 0;
}

void Strcat(char *string_1,char *string_2)
{
	int i=strlen(string_1),x=0;
	while(string_2[x]!='\0')
	{
		*(string_1+i)=*(string_2+x);
		x++,i++;
	}
	*(string_1+i)='\0';
}

void Delete(char *string_1,char *string_2)
{
	int i=0,j=0;
	while(string_1[i]!='\0')
	{
		if(string_1[i]>=65 and string_1[i]<=90 or string_1[i]>=97 and string_1[i]<=122 or string_1[i]>=48 and string_1[i]<=57)
		{
			string_2[j]=string_1[i];
			j++,i++;
		}
		else
		{
			i++;
		}
		string_2[j]='\0';
	}
}

void fun(char *string)
{
	char c;
	int i,j;
	for(i=strlen(string)-1;i;i--)
	{
		for(j=0;j<i;j++)
		{
			if(string[j]>string[j+1])
			{
				c=string[j];
				string[j]=string[j+1];
				string[j+1]=c;
			}
		}
	}
}*/
/*#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<4;i++)
	{
		A[i]=i+1;
	}
	for(i=3;i<n;i++)
	{
		A[i]=A[i-1]+A[i-3];
	}
	printf("%d",A[n-1]);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int p,n,i,x;
	scanf("%d",&n);
	int *A=new int[n+1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=n;i;i--)
	{
		for(x=0;x<i-1;x++)
		{
			if(A[x]>A[x+1])
			{
				int c=A[x];
				A[x]=A[x+1];
				A[x+1]=c;
			}
		}
	}
	x=-1;
	for(i=0;i<n;i++)
	{
		if(A[i]%3==0)
		{
			p=A[i];
			x=1;
			break;
		}
	}
	if(x==-1)
	{
		printf("Null");
	}
	else
	{
		printf("%d",p);
	}
	delete []A;
	return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char A[1000],B[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",A);
		int ex=0;
		int x=strlen(A)-1,y=0;
		for(x,y;x>-1;x--,y++)
		{
			B[y]=A[x];
		}
		x=strlen(A);
		for(y=0;y<x;y++)
		{
			if(A[y]!=B[y])
			{
				ex++;
			}
		}
		if(ex==2)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}*/

/*#include<stdio.h>
#include<string.h>
void sum1(int a[][4]);
void sum2(int a[][4],int b);
void search(int a[][4],int n);

int main()
{
	int a[3][4]={{15,57,70,60},{58,87,90,81},{90,99,100,98}},b;
	scanf("%d",&b);
	sum1(a);
	sum2(a,b);
	search(a,3);
	return 0;
}

void sum1(int a[][4])
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		for(int x=0;x<4;x++)
		{
			sum+=a[i][x];
		}
	}
	sum/=12;
	printf("%d\n",sum);
}

void sum2(int a[][4],int b)
{
	for(int x=0;x<4;x++)
	{
		printf("%d ",a[b-1][x]);
	}
	printf("\n");
}

void search(int a[][4],int n)
{
	int x;
	for(int i=0;i<3;i++)
	{
		int p=0;
		for(x=0;x<4;x++)
		{
			if(a[i][x]<60)
			{
				p++;
			}
		}
		if(p>1)
		{
			for(x=0;x<4;x++)
			{
				printf("%d ",a[i][x]);
			}
			printf("\n");
		}
	}
}*/


/*#include<stdio.h>
#include<string.h>
void sort(char **name,int n);
void print(char **name,int n);

int main()
{
	char *name[]={"Follow me","BASIC","Great wall","FORTRAN","Computer design"};
	int n=5;
	sort(name,n);
	print(name,n);
	return 0;
}


void sort(char **name,int n)
{
	for(int i=n;i>-1;i--)
	{
		for(int p=n-i;p<n-1;p++)
		{
			if(strcmp(name[p],name[p+1])>0)
			{
				char *swap=name[p];
				name[p]=name[p+1];
				name[p+1]=swap;
			}
		}
	}
}


void print(char **name,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s ",name[i]);
	}
}*/

/*#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
int main()
{
	char A[100],B[100],C[300],*D="/*",*E="*//*";
	fgets(A,100,stdin);
	A[strlen(A)-1]='\0';
	fgets(B,100,stdin);
	B[strlen(B)-1]='\0';
	int p,i=0,x=strlen(B);
	for(i;i<strlen(A);i++)
	{
		for(p=i;A[p]-B[p-i]==0 and A[p]!='\0' or abs(A[p]-B[p-i])==32 and A[p]!='\0' and A[p]!=' ';)
		{
			p++;
		}
		if(p-i==x)
		{
			for(p=0;p<strlen(A)+4;p++)
			{
				if(p<i)
				C[p]=A[p];
				else if(p<i+2)
				C[p]=D[p-i];
				else if(p<i+x+2)
				C[p]=A[p-2];
				else if(p<i+x+4)
				C[p]=E[p-i-x-2];
				else
				C[p]=A[p-4];
			}
			C[p]='\0';
			i+=x+4;
			for(p=0;C[p]!='\0';p++)
			{
				A[p]=C[p];
			}
			A[p]='\0';
		} 
	}
	puts(A);
	return 0;
}*/




/*#include<stdio.h>
int find(*a,*b[n]);

int main()
{
	int n,i;
	scanf("%d",&n);
	char *team[n];
	int jf[n],*jdf[n*(n-1)/2];
	for(i=0;i<n;i++)
	{
		scanf("%s",team[i]);
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		char a[50],b[50];
		int c,d;
		scanf("%s-%s:%d-%d",a,b,&c,&d);
		int team_1=find(a,team);
		int team_2=find(b,team);
		jdf[i][team_1]=c;
		jdf[i][team_2]=d;
		if(c>d)
		{
			jf[team_1]+=3;
		}
		else if(c<d)
		{
			jf[team_2]+=3;
		}
		else
		{
			jf[team_1]++;
			jf[team_2]++;
		}
	}
	
}

int find(*a,*b[n])
{
	int i=0;
	for(int i=0;i<n;i++)
	{
		int p=1,x=0;
		while(b[i][x]!='\0')
		{
			if(b[i][x]!=a[x])
			{
				p=-1;
				break;
			}
		}
		if(p==1)
		{
			break;
		}
	}
	return i;
}*/


/*#include<stdio.h>
#include<string.h>
void swap(int (*a)[3],int (*b)[2]);

int main()
{
	int dim[2][3]={1,2,3,4,5,6},dst[3][2];
	for(int i=0;i<3;i++)
	{
		for(int x=0;x<2;x++)
		{
			dst[i][x]=dim[x][i];
			printf("%d ",dst[i][x]);
		}
		printf("\n");
	}
	swap(dim,dst);
	return 0;
}

void swap(int (*a)[3],int (*b)[2])
{
	for(int i=0;i<3;i++)
	{
		for(int x=0;x<2;x++)
		{
			b[i][x]=a[x][i];
			printf("%d ",b[i][x]);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
struct birthday
{
	int year;
	int month;
	int day;
};

struct studenttape
{
	int num;
	char name[];
	int age;
	struct birthday birthday;
	float score;
}student;



int main()
{
	scanf("%d",&student.num);
	scanf("%s",student.name);
	scanf("%d",&student.age);
	scanf("%d%d%d",&student.birthday.year,&student.birthday.month,&student.birthday.day);
	scanf("%f",&student.score);
}*/



/*#include<stdio.h>
#define n 3
struct studenttype
{
	int num;
	char *name;
	char *sex;
	int age;
	float score;
};
	struct studenttype student[n]=
	{
		{10101,"刘德华","nan",42,98.1},
		{10102,"张靓颖","nv",22,99.8},
		{10103,"张学友","nan",43,96.5}
	};
int main()
{
	int i,num=0;
	float sum=0;
	for(i=0;i<n;i++)
	{
		printf("%8d",student[i].num);
		printf("%12s",student[i].name);
		printf("%6s",student[i].sex);
		printf("%6d",student[i].age);
		printf("%8.1f",student[i].score);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		if(student[i].score>=60)
		{
			num++;
		}
		sum+=student[i].score;
	}
	printf("%f\n",sum/n);
	printf("%d",num);
	return 0;
}*/

/*#include<stdio.h>
#define num 3
struct studenttype
{
	char name[100];
	char number[100];
}menber[3]={{0,0},{0,0},{0,0}};

int main()
{
	for(int i=0;i<num;i++)
	{
		printf("\n输入第%d个人的通讯信息；\n",i+1);
		printf("输入姓名：");
		gets(menber[i].name);
		printf("输入电话号码：");
		gets(menber[i].number);
	}
	printf("\n\n姓名\t\t\t电话号码\n\n");
	for(int x=0;x<num;x++)
	{
		printf("%s\t\t\t%s\n",menber[x].name,menber[x].number);
	}
	return 0;
}*/



/*#include<stdio.h>
int main()
{
	int n,k,i,j;
	scanf("%d%d",&n,&k);
	int a[n][n],b[n][n],c[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	for(int p=0;p<k-1;p++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=0;
				for(int k=0;k<n;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				b[i][j]=c[i][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
} */

/*#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,p,m,num=1;
	scanf("%d",&n);
	char b[100]={"SCU"};
	for(i=0;i<n;i++)
	{
		char a[100]={"0"};
		scanf("%s",a);
		if(a[0]=='S' and a[1]=='C' and a[2]=='U' and strlen(a)==3)
		{
			printf("YES\n");
			continue;
		}
		for(p=0,m=0;p<strlen(a);p++)
		{
			if(a[p]==b[m])
			{
				m++;
			}
			if(m==3)
			{
				break;
			}
		}
		for(m=p+1;m<strlen(a);m++)
		{
			if(a[m]!='A')
			{
				num=0;
				break;
			}
		}
		for(m=p-3;m>-1;m--)
		{
			if(a[m]!='A')
			{
				num=0;
				break;
			}
		}
		if(num==1 and p-2==strlen(a)-p-1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n,i,num,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		int a[20],b[20]={0};
		a[0]=1;
		a[1]=1;
		b[0]=1;
		for(int x=0;x<num+1;x++)
		{
			if(x==1)
			{
				printf("1\n");
			}
			else if(x==2)
			{
				printf("1 1\n");
			}
			if(x>2)
			{
				for(m=1;m<x-1;m++)
				{
					b[m]=a[m-1]+a[m];
				}
				b[m]=1;
				for(m=0;m<x;m++)
				{
					a[m]=b[m];
					printf("%d ",a[m]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}*/






/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[10];
	char number[18];
	char score[3];
};
int main()
{
	int n,i,max,min,p;
	scanf("%d",&n);
	struct student a[n];
	char *k[n],q[]="n/a";
	int x=n;
	for(i=0;i<x;i++)
	{
		scanf("%s%s%s",a[i].name,a[i].number,a[i].score);
		if(strcmp(a[i].score,q)==0)
		{
			delete[]a[i].name;
			delete[]a[i].number;
			delete[]a[i].score;
			i--;
			x--;
		}
	}
	int b[x];
	for(i=0;i<x;i++)
	{
		b[i]=atoi(a[i].score);
	}
	for(i=0;i<x-1;i++)
	{
		if(b[i]>b[i+1])
		{
			int p=b[i];
			b[i]=b[i+1];
			b[i+1]=p;
		}
	}
	max=b[i];
	for(i=0;i<x-1;i++)
	{
		if(b[i]<b[i+1])
		{
			p=b[i];
			b[i]=b[i+1];
			b[i+1]=p;
		}
	}
	min=b[i];
	delete[]b;
	p=0;
	for(i=0;i<x;i++)
	{
		if(atoi(a[i].score)==max)
		{
			k[p]=a[i].name;
			b[p]=i;
			p++;
		}
	}
	for(i=0;i<p-1;i++)
	{
		if(strcmp(k[i],k[i+1])<0)
		{
			char *swap=k[i];
			k[i]=k[i+1];
			k[i+1]=swap;
			int s=b[i];
			b[i]=b[i+1];
			b[i+1]=s;
		}
	}
	printf("%s %s\n",a[b[p-1]].name,a[b[p-1]].number);
	delete[]b;
	p=0;
	for(i=0;i<x;i++)
	{
		if(atoi(a[i].score)==min)
		{
			k[p]=a[i].name;
			b[p]=i;
			p++;
		}
	}
	for(i=0;i<p-1;i++)
	{
		if(strcmp(k[i],k[i+1])>0)
		{
			char *swap=k[i];
			k[i]=k[i+1];
			k[i+1]=swap;
			int s=b[i];
			b[i]=b[i+1];
			b[i+1]=s;
		}
	}
	printf("%s %s\n",a[b[p-1]].name,a[b[p-1]].number);
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct index
{
	char name[11];
	char number[19];
	char score[4];
}a[100];

int main()
{
	int n,i,x,max,min;
	char p[]="n/a";
	scanf("%d",&n);
	for(i=0,x=0;i<n;i++,x++)
	{
		char b[11],c[19],d[4];
		scanf("%s%s%s",b,c,d); 
		if(strcmp(d,p)==0)
		{
			x--;
			continue;
		}
		strcpy(a[i].name,b);
		strcpy(a[i].number,c);
		strcpy(a[i].score,d);
	}
	int e[x],f[x];
	for(i=0;i<x;i++)
	{
		e[i]=atoi(a[i].score);
		f[i]=atoi(a[i].score);
	}
	for(i=0;i<x-1;i++)
	{
		if(e[i]>e[i+1])
		{
			int p=e[i];
			e[i]=e[i+1];
			e[i+1]=p;
		}
	}
	max=e[i];
	for(i=0;i<x-1;i++)
	{
		if(e[i]<e[i+1])
		{
			int p=e[i];
			e[i]=e[i+1];
			e[i+1]=p;
		}
	}
	min=e[i];
	char *g[x],*h[x];
	int k[x],l[x];
	int j=0,m=0;
	for(i=0;i<x;i++)
	{
		if(atoi(a[i].score)==max)
		{
			g[j]=a[i].name;
			k[j]=i;
			j++;
		}
		if(atoi(a[i].score)==min)
		{
			h[m]=a[i].name;
			l[m]=i;
			m++;
		}
	}
	if(j==1)
	{
		printf("%s %s\n",a[k[0]].name,a[k[0]].number);
	}
	else
	{
		for(i=0;i<j-1;i++)
		{
			if(strcmp(g[i],g[i+1])<0)
			{
				char *swap=g[i];
				g[i]=g[i+1];
				g[i+1]=swap;
				int sw=k[i];
				k[i]=k[i+1];
				k[i+1]=sw;
			}
		}
		printf("%s %s\n",a[k[j-1]].name,a[k[j-1]].number);
	}
	if(m==1)
	{
		printf("%s %s",a[l[0]].name,a[l[0]].number);
	}
	else
	{
		for(i=0;i<m-1;i++)
		{
			if(strcmp(h[i],h[i+1])>0)
			{
				char *swap=h[i];
				h[i]=h[i+1];
				h[i+1]=swap;
				int sw=l[i];
				l[i]=l[i+1];
				l[i+1]=sw;
			}
		}
		printf("%s %s",a[l[m-1]].name,a[l[m-1]].number);
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("16 31");
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	printf("                ********\n");
	printf("               ************\n");
	printf("               ####....#.\n");
	printf("             #..###.....##....\n");
	printf("             ###.......######              ###            ###\n");
	printf("                ...........               #...#          #...#\n");
	printf("               ##*#######                 #.#.#          #.#.#\n");
	printf("            ####*******######             #.#.#          #.#.#\n");
	printf("           ...#***.****.*###....          #...#          #...#\n");
	printf("           ....**********##.....           ###            ###\n");
	printf("           ....****    *****....\n");
	printf("             ####        ####\n");
	printf("           ######        ######\n");
	printf("##############################################################\n");
	printf("#...#......#.##...#......#.##...#......#.##------------------#\n");
	printf("###########################################------------------#\n");
	printf("#..#....#....##..#....#....##..#....#....#####################\n");
	printf("##########################################    #----------#\n");
	printf("#.....#......##.....#......##.....#......#    #----------#\n");
	printf("##########################################    #----------#\n");
	printf("#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n");
	printf("##########################################    ############\n");
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a+b);
	return 0;
}*/



/*#include<iostream>
using namespace std;

int main()
{
	int i=10;
	char c='a';
	float f=20.325;
	int *pi=&i;
	char *pa="Hellow World!";
	cout<<i<<'\t'<<c<<'\t'<<f<<endl;
	cout<<pi<<'\t'<<pa<<endl;
	return 0; 
} */

/*#include<iostream>
using namespace std;

int main()
{
	char a[100];
	cin.getline(a,20);
	cout<<a<<endl;
	return 0; 
}*/


#include<iostream>
using namespace std;

int main()
{
	
}












