#include<stdio.h>
#define max 5
int q[max],front=-1,rear=-1,pri[max],p,i;
int insert();
int delete();
int display();
int main()
{
int choice=0;
do
{
printf("\nEnter a choice\n1.Enqueue\n2.Dequeue\n3.Display\n0.Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1 : insert();
	 break;
case 2 : delete();
         break;
case 3 : display();
         break;
case 0 : break;
default: printf("Wrong choice \n\t Re-enter the choice\n");
}
}while(choice!=0);

}
int insert()
{
int item,temp,t;
if(front==0 && rear==max-1)
	printf("Queue OverFlow");
else if(front==-1 && rear==-1)             //first element
{
	printf("Enter the Data\t");
        scanf("%d",&item);
	printf("Enter the Priority\t");
	scanf("%d",&p);
	front=0;
	rear=0;
	q[rear]=item;
        pri[rear]=p;
}
else
{
	printf("\nEnter the Data\t");
	scanf("%d",&item);
	printf("Enter the Priority\t");
        scanf("%d",&p);
        rear++;
        q[rear]=item;
        pri[rear]=p;
	for(i=0;i<=rear;i++)
	{
       		if(pri[rear]<pri[i] && pri[rear]!=pri[i])
		{
       		t=pri[rear];
		pri[rear]=pri[i];
		pri[i]=t;
		temp=q[rear];
                q[rear]=q[i];
                q[i]=temp;
               	}

	}	
}
}
int delete()
{
if(rear==-1)
	printf("Queue Underflow");
else if(front==rear)
	{
	printf("The Data %d is deleted with priority %d",q[front],pri[front]);
	front=rear=-1;
	}
else
	{
	printf("The Data %d is deleted with priority %d",q[front],pri[front]);
	front++;
	}
}

int display()
{
int slno=1;
if(front==-1 && rear==-1)
	printf("Queue Is Empty");
else
{
	for(i=front;i<=rear;i++)
	{
	printf("\n%d. Data %d\t\tPriority %d",slno,q[i],pri[i]);
	slno++;
	}
}
}
