#include<stdio.h>
#define len 3
void insert();
void delete();
void display();
int q[len];
int rear=-1;
int front=-1;
int main()
{
int i=0,choice;
while(i!=1)
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
if((rear+1)%len==front)
printf("\n\t\tQueue OverFlow!!!");
else
	{
printf("\nEnter the element to be inserted\n");
scanf("%d",&item);
if(front==-1 && rear==-1)
		{
front=0;
rear=0;
q[rear]=item;
		}
else
		{
rear=(rear+1)%len;
q[rear]=item;
		}
	}
}
void delete()
{
int item;
if(front==-1 && rear==-1)
{
printf("\n\t\tStack UnderFlow!!!");
return;
}
else if(front==rear)
{
item=q[front];
printf("\nThe element %d is deleted from the queue!!!\n",q[front]);
front=-1;
rear=-1;
}
else
{
item=q[front];
printf("\nThe element %d is deleted from the queue!!!\n",q[front]);
front=(front+1)%len;
}
}
void display()
{
int i;
if((front==-1)&&(rear==-1))
printf("\n\t\tQueue is Empty!!!");
else
{
printf("\tThe Queue Elements are :\n");
i=front;
while(i<=rear)
{
i=(i+1);
printf("\t%d",q[i]);
}
}
}

