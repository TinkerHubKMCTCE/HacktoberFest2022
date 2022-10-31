#define max 10
int dq[max];
int l=-1,r=-1;
void inrig(void);
void inlef(void);
void delrig(void);
void dellef(void);
void display(void);

int main()
{
int choice;
do
{
printf("\n1.Insert at Right\n2.Insert at Left\n3.Delete from Right\n4.Delete from Left\n5.Display\n6.Exit\n");
printf("Enter your Choice :\t");
scanf("%d",&choice);
switch(choice)
{
	case 1: inrig();
		break;
	case 2: inlef();
        	break;
	case 3: delrig();
        	break;
	case 4: dellef();
        	break;
	case 5: display();
        	break;
}
}while(choice!=6);
}

void inlef()
{
int val;
printf("\nEnter the value to be added\t");
scanf("%d",&val);
if((l==0 && r==max-1)||(l==r+1))
{
        printf("\nOVERFLOW!!!");
        return;
}
if((l==-1)&&(r==-1))
{
	l=0;
	r=0;
}
else
{
	if(l==0)
		l=max-1;
	else
		l=l-1;
}
dq[l]=val;
}
void inrig()
{
int val;
printf("\nEnter the value to be added\t");
scanf("%d",&val);
if((l==0 && r==max-1)||(l==r+1))
{
        printf("\nOVERFLOW!!!");
        return;
}
else if((l==-1)&&(r==-1))
{
        r=0;
	l=0;
}
else
{
        if(r==max-1)
                r=0;
        else
        	r++;
}
dq[r]=val;
}


void delrig()
{
if(l==-1)
{
        printf("\nUNDERFLOW!!!");
	return;
}
printf("\nThe deleted element is %d\n",dq[r]);
if(l==r)
{
        l=-1;
        r=-1;
}
else
{
        if(r==0)
                r=max-1;
        else
                r=r-1;
}
}


void dellef()
{
if(l==-1)
{
        printf("\nUNDERFLOW!!!");
        return;
}
printf("\nThe deleted element is %d\n",dq[l]);
if(l==r)
{
        l=-1;
        r=-1;
}
else
{
        if(l==max-1)
                l=0;
        else
                l=l+1;
}
}

void display()
{
int front=l,rear=r;
if(front==-1)
{
	printf("\nQueue is Empty\n");
	return;
}
printf("\nThe Elements in the queue are :\n\t\t ");
if(front<=rear)
{
	for(front=l;front<=rear;front++)
	{
		printf("%d\t",dq[front]);
	}
}
else
{
	while(front<=max-1)
        {
                printf("%d\t",dq[front]);
                front++;	
        }
	front=0;
	while(front<=rear)
        {
                printf("%d\t",dq[front]);
                front++;
        }
}
printf("\n");
}
