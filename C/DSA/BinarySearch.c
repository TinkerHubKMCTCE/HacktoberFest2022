#include<stdio.h>
int main()
{
int n,begin=0;
printf("Enter the number of elements\n");
scanf("%d",&n);
int arr[n],i,end=n-1,mid=(begin+end)/2,f=0,s;
printf("Enter the elements in sorted order\n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
printf("Enter the search element\n");
scanf("%d",&s);
while(begin<=end)
{
	if(arr[mid]>s)
		end=mid-1;
	else if(arr[mid]==s)
	{
		printf("\nThe search element %d is found at the location %d\n",s,mid+1);
		f=1;
		break;
	}
	else if(arr[mid]<s)
	{
		begin=mid+1;
		mid=(begin+end)/2;
	}
}
if(f==0)
printf("Error 404 : The search element not found");
}
