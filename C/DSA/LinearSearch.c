#include <stdio.h>
int main()
{
int n;
printf("Number of elements in the array\t");
scanf("%d",&n);
int arr[n],i,s,flag=0;
printf("Enter the array elements\n");
for (i=0;i<n;i++)
	scanf("%d",&arr[i]);
printf("Enter the Search Element\t");
scanf("%d",&s);
for (i=0;i<n;i++)
{
	if(arr[i]==s)
	{
	printf("\nThe search element is found at the location %d\n",i+1);
	flag=1;
	}
}
if (flag==0)
printf("\nThe search element is not found\n");
}
