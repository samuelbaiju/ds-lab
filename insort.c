#include<stdio.h>
void insort(int [],int n);
void disarray(int [],int n);
void main()
{
int a[50],n,i;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
insort(a,n);
disarray(a,n);
}
void insort(int a[], int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;	
		}
		a[j+1]=key;
	}
																														
}
void disarray(int a [],int n)
{
int i;
printf("the sorted array is");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
