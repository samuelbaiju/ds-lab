#include <stdio.h>
# define size 10
int top=0;
char s[size];
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

void main()
{
	char a[20];
	int i;
	printf("enter the string");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
		push(a[i]);
	while(!isempty())
		printf("%c",pop());
}
