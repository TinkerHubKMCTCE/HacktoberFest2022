#include <stdio.h>
#define MAX 100
int push();
int pop();
void peek();
int stack[MAX],top=-1,j,max;
int main()
{
int w,r=0,i;
printf("Enter the Size of the Stack\n");
scanf("%d",&max);
while(r==0)
{
printf("\nSelect the Stack Operation\n1.Push\n2.Pop\n3.Peek\n");
scanf("%d",&w);
switch(w)
{
case 1 : push();
	 break;
case 2 : pop();
	 break;
case 3 : peek();
	 break;
default: printf("\nInvalid Option\n ");
}
printf("\nDo you wish to continue\n\n 0 for Yes \n 1 for No\n");
scanf("%d",&r);
}
}
int push()
{
if(top==max-1)
{
printf("\nStack Over Flow!!!\n");
return;
}
else
{
printf("\nEnter the value to be pushed\t");
top++;
scanf("%d",&stack[top]);
}
}
int pop()
{
int e;
if(top==-1)
printf("\nStack is Empty \n Stack UnderFlow!!! ");
else
{
e=stack[top];
printf("\nThe value %d is deleted !!!",e);
top--;
}
}
void peek()
{
printf("\nThe Stack is");
if(top==-1)
printf(" Empty!!!");
else
{
for(j=0;j<top+1;j++)
	printf("\t %d",stack[j]);
}
}
