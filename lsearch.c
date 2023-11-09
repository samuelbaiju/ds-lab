#include<stdio.h>
void search(int[],int);
void main()
{
int a[10],n,i;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
search(a,n);
}
void search(int s[],int b)
{
int l,i,t=0;
printf("enter the number to be searched");
scanf("%d",&l);
for(i=0;i<=b;i++)
{
	if(s[i]==l)
	{
	t=1;
	break;
	}
}
if(t==1)
{
printf("the number is found at %dth position",i);
}
else
{
printf("the number is not found");
}
}
	
