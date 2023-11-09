#include <stdio.h>
int partition(int [],int,int);
void qsort(int [],int,int);
void disarray(int [],int);
void swap(int*,int*);
void main()
{
int a[50],n,i;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
qsort(a,0,n-1);
disarray(a,n);
}


int partition(int a[],int start,int end)
{
	int key,i,j;
	key=a[start];
	i=start+1;
	j=end;
do{
	while(i<j && a[i]<key)
	i++;
	while(j>start&&a[j]>key)
	j--;
	if(i<j)
	swap(&a[i],&a[j]);
   }
while(i<j);
swap(&a[start],&a[j]);
return j;
}



void qsort(int a[],int start,int end)
{
int pos;
if(start<end)
{
pos=partition(a,start,end);
qsort(a,start,pos-1);
qsort(a,pos+1,end);
}
}

void disarray(int a [],int n)
{
int i;
printf("the sorted array is");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}


void swap(int*a,int*b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
