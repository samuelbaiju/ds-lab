#include<stdio.h>
void selsort(int a[],int n);
void swap(int *a,int *b);
void printnum(int a[],int n);
void main()
{
int a[50];
int i,n;
printf("enter the no of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
selsort(a,n);
printnum(a,n);
}
void selsort (int a[],int n)
{
	int c,lar,p,ind;
	for(p=0;p<n-1;p++)
	{
		lar=a[0];
		ind=0;
		for(c=1;c<n-p;c++)
			{
				if(a[c]>lar)
					{
						lar=a[c];
						ind=c;
					}
			}
		swap (&a[ind],&a[n-p-1]);
	}
}
void swap(int*a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

void printnum(int a[],int n)
{
int k;
printf("the sorted array is:");
	for(k=0;k<n;k++)
		printf("%d\t",a[k]);
}			
