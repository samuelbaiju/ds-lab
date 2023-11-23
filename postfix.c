#include<stdio.h>
#define size 10
char a[size];
int t=0;
int stackp(char);
int inputp(char);
int isfull();
int isempty();
void push(char);
char pop();
char peek();
int stackp(char c)
{
 switch(c)
 {
  case '+':
  case '-': return(2);
            break;
  case '*':
  case '/': return(4);
            break;
  case '^': return(5);
            break;
  case '(':return(0);
           break;
 }
}
int inputp(char c)
{
 switch(c)
 {
  case '+':
  case '-': return(1);
            break;
  case '*':
  case '/': return(3);
            break;
  case '^': return(6);
            break;
 }
}
int isfull()
{
 if(t==size)
   return(1);
 else 
  return(0);
}
int isempty()
{
 if(t==0)
  return(1);
 else
  return(0);
}
void push(char v)
{
 a[t++]=v;
}
char pop()
{
 t--;
 return(a[t]);
}
char peek()
{
 return(a[t-1]);
}
void main()
{
 char infix[100],postfix[100];
 int i,j=0;
 printf("Enter the infix Expression::");
 gets(infix);
 for(i=0;infix[i]!='\0';i++)
 {
  switch(infix[i])
  {
   case '(':push(infix[i]);
            break;
   case '+':
   case '-':
   case '*':
   case '/':
   case '^':
            while(!isempty()&&inputp(infix[i])<stackp(peek()))
                  postfix[j++]=pop();
               
                   push(infix[i]);
              break;
             
   case ')':while(peek()!='(')
             postfix[j++]=pop();
             pop();
             break;
   default:postfix[j++]=infix[i];
  }
 }
 while(!isempty())
   postfix[j++]=pop();
 postfix[j]='\0';
 puts(postfix);
}
				



















