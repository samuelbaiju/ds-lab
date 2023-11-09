#include<stdio.h>
int bsearch(int [],int n,int x);
void main()
{
int a[50],n,i,x,s;
printf("enter the no of elements");
scanf("%d",&n);
printf("enter the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element to be found");
scanf("%d",&x);
bsearch(a,n,x);
s=bsearch(a,n,x);
if(s==-1)
{
printf("the element is not found");
}
else
{
printf("the element  is found at the position %d",s+1); 
}
}
int bsearch(int a[],int n,int x)
{
int top=0,bot=n-1,mid;
	while(top<=bot)
	{
		mid=(top+bot)/2;
		if(a[mid]==x)
			return(mid);
		else if(x<a[mid])
			bot=mid-1;
		else
			top=mid+1;
	}
return(-1);
}


