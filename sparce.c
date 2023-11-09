#include<stdio.h>
void sparse(int [10][10],int,int);
void main()
{
int a[10][10];
int i,r,c,j;
printf("enter the size of the rows and coloumns");
scanf("%d%d",&r,&c);
printf("enter the elements into array");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
sparse(a,r,c);
}
void sparse (int a[10][10], int r, int c) 
{
int b[10][3];
int i,j;
int k=0;
int size=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		if(a[i][j]!=0)
		{
			size++;
		}
	}
}
b[k][0]=r;
b[k][1]=c;
b[k][2]=size;
k++;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		if(a[i][j]!=0)
		{
			b[k][0]=i;
			b[k][1]=j;
			b[k][2]=a[i][j];
			k++;
		}
	}
}
printf("the triplet table");
printf("\n");
for(i=0;i<k;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d",b[i][j]);
		printf("\t");
	}
	printf("\n");
}
}
