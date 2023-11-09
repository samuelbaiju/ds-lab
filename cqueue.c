#include <stdio.h>
# define size 10
int s[10];
int f=-1,r=-1;
int isfull()
{
	if(f==(r+1)%size)
		return(1);
	else
		return(0);
}
int isempty()
{
	if(f==-1)
		return(1);
	else
		return(0);
}

void insertq(int value)
{
	if (isfull())
		printf("queue is full");
	else
		if(isempty())
			f=r=0;
		else
			r=(r+1)%size;
			s[r]=value;
}
int deleteq()
{
	if(isempty())
		printf("empty");
	else
	{
		 int value=s[f];
		if(f==r)
			f=r=-1;
		else
			f=(f+1)%size;
			return (value);
	}
}
void display()
{
	int i;
	for(i=f;i<=(r+1)%size;i++)
	{
	printf("%d",s[i]);
	printf("\n");
	}

}		
void main()
{
	int c,a,v;
do
	{
	printf("\n 1.insert queue\n\n 2.delete queue\n \n3.display\n");
		printf("enter your choice");
		scanf("%d",&c);
		switch(c)
		{
		case 1: printf("the element to be pushed");
			scanf("%d",&a);
			insertq(a);
			break;
		case 2: v=deleteq();
			printf("%d",v);
			break;
		case 3: printf("the queue is");
			display();
		}
	}
	while(c<=3);
}


