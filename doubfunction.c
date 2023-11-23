#include<stdio.h>
#define size 5
int a[size];
int f=-1,r=-1;
int isfull();
void read(int);
int delete();
int display();
void infirst(int);
int delrear();
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
void read(int v)
{
 if(f==-1&&r==-1)
   f=r=0;
 else
   r=((r+1)%size);
 a[r]=v;
}
int delete()
{
 int b;
 b=a[f];
 if(r!=f)
  f=(f+1)%size;
 else
  f=r=-1;
 return(b);
}
int display()
{
 int i;
 for(i=f;r!=i%size;i=(i+1)%size)
   printf("%d\t",a[i]);
 if(r==i)
  printf("%d\t",a[i]);
}
void main()
{
 int i,j;
 
 do{
 printf("\nENTER THE CHOICE\n\t1>Insert\n\t2>Delete\n\t3>Display\n\t4>Inputfirst\n\t5>Deleterear\n\t6>Cancel\nCHOICE:");
 scanf("%d",&i);
 switch(i)
 {
  case 1:if(isfull())
           printf("The list is full\n");
         else
         {
          printf("Enter the element");
          scanf("%d",&j);
          read(j);
         }
         break;
  case 2:if(isempty())
            printf("The list is empty\n");
         else 
            printf("Deleted element is:%d\n",delete());
         break;
  case 3:if(isempty())
            printf("The list is empty\n");
         else 
          display();
         break;
  case 4:if(isfull())
           printf("The list is full\n");
         else
         {
          printf("Enter the element");
          scanf("%d",&j);
          infirst(j);
         }
         break;
  case 5:if(isempty())
            printf("The list is empty\n");
         else 
            printf("Deleted element is:%d\n",delrear());
         break;
  case 6: break;
  default : printf("Enter a valid choice\n");
 }}while(i!=6);
 }
void infirst(int v)
{
 if(isempty())
   f=r=0;
 else 
  f=(f+size-1)%size;
 a[f]=v;
}
int delrear()
{
 int s;
 s=a[r];
 if(f==r)
  f=r=-1;
 else
  r=(r+size-1)%size;
 return s;
}
   
 
