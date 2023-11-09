#include <stdio.h>
# define size 10
int top=0;
int s[size];

int isfull()
{
	if(top>=size)
		return(1);
	else
		return(0);
}
int isempty()
{
	if(top==0)
		return(1);
	else
		return(0);
}
int pop()
{
	if(isempty())
		printf("Stck is empty");
	else
	{
		top=top-1;
		return(s[top]);
	}
}
void push(int value)
{
	if (isfull())
		printf("Stack is full");
	else
		s[top++]=value;	
}
int peek()
{
	if(isempty())
		printf("empty");
	else
		return(s[top-1]);
}
void displaystack()
{
	int i;
	for(i=0;i<top;i++)
	{
	printf("%d",s[i]);
	printf("\n");
	}
}

void main()
{ 
int v,c;
	do
	{
		printf("\n 1.push\n\n 2.pop\n\n 3.peek\n\n 4.display\n");
		printf("enter your choice");
		scanf("%d",&c);
		switch(c)
		{
		case 1:  if(isfull())
			printf("stack is full");
			else
			{
			printf("enter the value");
			scanf("%d",&v);
			push(v);
			}
			break;
		case 2:   if(isempty())
			printf("is empty");
			else
			{
			printf("the value is %d",pop());
			break;
			}
		case 3:  if(isempty())
			printf("is empty");
			else
			{
			printf("the topmostvalue is %d",peek());
			break;
			}
		case 4: printf("the stack is");
			displaystack();
		}
	}
	while(c<=4);
}



