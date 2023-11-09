#include<stdio.h>
void simplemerge(int[],int, int,int);
void merge(int[],int,int);
void printnum(int[],int);
void main()
{
int a[50];
int i,n;
printf("enter the no of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
merge(a,0,n-1); 
printnum(a,n);
}
void simplemerge(int a[],int f,int s,int t)
{
	int i=f,j=s,k=0;
	int temp[50];
	while(i<s&&j<=t)
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else if(a[i]>a[j])
			temp[k++]=a[j++];
	}
	while(i<s)
		temp[k++]=a[i++];
	while(j<=t)
		temp[k++]=a[j++];
	for(k=0,i=f;i<=t;)
		a[i++]=temp[k++];
}
void merge(int a[],int beg, int end)
{
	if(beg<end)
	{
		int mid;
		mid=(beg+end)/2;
		merge(a,beg,mid);
		merge(a,mid+1,end);
		simplemerge(a,beg,mid+1,end);
	}
}
void printnum(int a[],int n)
{
int i;
printf("the sorted array is");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
}
