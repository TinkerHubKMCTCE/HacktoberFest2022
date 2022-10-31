#include <stdio.h>
struct node 
{
	int data;
	struct node*next;

};
struct node *head;

void beginsert();
void lastinsert();
void randominsert();
void begin_del();
void last_del();
void random_del();
void display();
void search();

int main()
{
	int choice=0;
	do
	{
	printf("\n\n-------------Main Menu-------------\n");
	printf("--------Choose one Option From Below--------\n");
	printf("\n1.Insert in Begining\n2.Insert at Last\n3.Insert at any Random Location\n4.Delete from Begining\n5.Delete from Last\n6.Delete Node after specified location\n7.Search for an Element\n8.Show\n\n-----------------9.Exit-----------------");
	printf("\n\n---------Enter your Choice----------\n");
	scanf("\n%d",&choice);
	switch(choice)
	{
	case 1 : beginsert();
		 break;
	case 2 : lastinsert();
		 break;
	case 3 : randominsert();
		 break;
	case 4 : begin_del();
		 break;
	case 5 : last_del();
		 break;
	case 6 : random_del();
		 break;
	case 7 : search();
		 break;
	case 8 : display();
		 break;
	case 9 : break;
	default: printf("\nError 404 : Option Not Found\n---------Enter Valid Choice----------\n");
	}
	}while(choice!=9);
}

void beginsert()
{
struct node *ptr;
int item;
ptr =(struct node *)malloc(sizeof(struct node *));
if(ptr != NULL)
{
	printf("\nEnter Value\n");
	scanf("%d",&item);
	ptr->data = item;
	ptr->next = ptr;
	printf("\nNode Inserted");
}
}

void lastinsert()
{
struct node *ptr,*temp;
int item;
ptr =(struct node *)malloc(sizeof(struct node));
if(ptr == NULL)
        printf("\nOverFlow");
else
{
        printf("\nEnter Value\n");
        scanf("%d",&item);
        ptr->data = item;
        if(head==NULL)
	{
		ptr->next=NULL;
		head = ptr;
        	printf("\nNode Inserted");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=ptr;
		ptr->next=NULL;
		printf("\nNode Inserted");
	}
}
}

void randominsert()
{
struct node *ptr,*temp;
int item,loc,i;
ptr =(struct node *)malloc(sizeof(struct node));
if(ptr == NULL)
        printf("\nOverFlow");
else
	{
        printf("\nEnter Element Value\n");
        scanf("%d",&item);
        ptr->data = item;
	printf("\nEnter the locatiom after which you want to Insert ");
	scanf("\n%d",&loc);
	for(i=0;i<loc;i++)
		{
		temp=temp->next;
        	if(temp==NULL)
        		{
			printf("\nCan't Insert\n");
			return;
			}
		}
		ptr->next=temp->next;
                temp->next=ptr;
               	printf("\nNode Inserted");
	}
}

void begin_del()
{
struct node *ptr;
if(head==NULL)
	printf("\nList is Empty\n");
else
	{
	ptr=head;
	head=ptr->next;
	free(ptr);
	printf("\nNode Deleted from the Begining...\n");
	}
}


void last_del()
{
struct node *ptr,*ptr1;
if(head==NULL)
        printf("\nList is Empty\n");
else if(head->next==NULL)
        {
        head=NULL;
        free(ptr);
        printf("\n--------Only Node of the List Deleted--------\n");
        }
else
	{
	ptr=head;
	while(ptr->next!=NULL)
		{
		ptr1=ptr;
		ptr=ptr->next;
		}
	ptr->next=NULL;
	free(ptr);
	printf("\n Deleted Node from the last \n");
	}
}
void random_del()
{
struct node *ptr,*ptr1;
int loc,i;
printf("\n Enter the location of the node after which you want to perform deletion \n");
scanf("%d",&loc);
ptr=head;
for(i=0;i<loc;i++)
	{
	ptr1=ptr;
	ptr=ptr->next;
	if(ptr==NULL)
		{
		printf("\n Can't delete");
		return;
		}
	}
ptr1->next=ptr->next;
free(ptr);
printf("\n Deleted node%d",loc+1);
}
void search()
{
struct node*ptr;
int item,i=0,flag;
ptr=head;
if(ptr==NULL)
	printf("\n Empty List \n");
else
	{
	printf("\nEnter item which you want to Search?");
	scanf("%d",&item);
	while(ptr!=NULL)
		{
		if(ptr->data==item)
			{
			printf("Item found at Location %d",i+1);
			flag=0;
			}
		else
			flag=1;
		i++;
		ptr=ptr->next;
		}
		if(flag==1)
			printf("Item not found\n");
	
	}
}

void display()
{
struct node *ptr;
ptr=head;
if(ptr==NULL)
	printf("Nothing to Print");
else
	{
	printf("\nPrinting Values....\n ");
	while(ptr!=NULL)
		{
		printf("\n%d",ptr->data);
		ptr=ptr->next;
		}
	}

}
