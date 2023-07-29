  //    Write a program to find min and max element in a array.
			
#include<stdio.h>
int main()
{
	int n,min,max;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("enter the num[%d] value: ",i);
		scanf("%d",&arr[i]);
	} 
	min=max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min && arr[i]!=max)
		{
			min=arr[i];
		}
	}
	printf("The largest element in the array is %d\n",max);
	if(min<max)
	{
		printf("The smallest element in the array is %d",min);
	}
	else
	{
		printf("There is no smallest element in the array\nAll elements are equal");
	}
	
	
	return 0;
}

