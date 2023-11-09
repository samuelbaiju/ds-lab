#include<stdio.h>
void array();
void addarray(int[],int);
void swap(int*,int*);
void bsort(int[],int);
void print(int[],int);
void main()
{
int a;
int m[10],n;
printf("which way of sort type is required");
scanf("%d",&a);
printf("enter the size of array");
scanf("%d",&n);
if(a==1)	
{
	addarray(m,n);
	bsort(m,n);
	print(m,n);
	
}
}

void addarray( int b[],int o)
{
	int i;
	for(i=0;i<o;i++)
	{
	scanf("%d",&b[i]);
	}
}
void bsort(int c[],int p)
{
int i,j;
for(i=0;i<p;i++)
{	for(j=0;j<p-i-1;j++)
	{
		if(c[j]>c[j+1])
		{
			swap(&c[j],&c[j+1]);
		}
	}
}
}
void swap(int*a,int*b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
void print( int d[],int q)
{
int i;
	for(i=0;i<=q;i++)
	{
	printf("%d",d[i]);
	printf("\t");
	}
}







