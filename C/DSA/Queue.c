#include<stdio.h>
#define max 10
void insert();
void delete();
void display();
int q[max];
int rear=-1;
int front=0;
int main()
{
int i=0,choice;
while(i==0)
{
printf("\n\n\tSELECT A CHOICE FROM BELOW\n1.Insert element to queue\n2.Delete element from queue\n3.Display the queue\nEnter The Choice :\t\t");
scanf("%d",&choice);
switch(choice)
	{
case 1 :
	insert();
	break;
case 2 :
	delete();
	break;
case 3 :
        display();
        break;
default:
	printf("\n\tWrong Choice!!!\n\t Try Again");
	}
printf("\n\t\tDo You Want To Continue?\n\t\t0 for Yes\t\t1 for No\n");
scanf("%d",&i);
}
}

void insert()
{
int item;
if(rear==max-1)
printf("\n\t\tStack OverFlow!!!");
else
{
if(front==-1)
front=0;
printf("\nEnter the element to be inserted\n");
scanf("%d",&item);
rear++;
q[rear]=item;
}
}
void delete()
{
int item;
if(front==-1 || front>rear)
{
printf("\n\t\tStack UnderFlow!!!");
return;
}
else
{
item=q[front];
printf("\nThe element %d is deleted from the queue!!!\n",q[front]);
front++;
}
}
void display()
{
int item,i;
if(front==-1 || front>rear)
printf("\n\t\tQueue is Empty!!!");
else
{
printf("\tThe Queue Elements are :\n");
for(i=front;i<=rear;i++)
printf("\t %d",q[i]);
}
}
