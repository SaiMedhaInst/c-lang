
   /* Write a Program to find second largest element in a array

	Input: arr[] = {12, 35, 1, 10, 34, 1}
	Output: The second largest element is 34.
	
	
	Input: arr[] = {10, 5, 10}
	Output: The second largest element is 5.
	
	
	Input: arr[] = {10, 10, 10}
	Output: The second largest does not exist.		*/

#include<stdio.h>
#include<limits.h>
int main()
{
	int n,large,second_large;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int arr[n];
	large =second_large= INT_MIN ;//// assign with lowest minimum number of int
	for(int i=0;i<n;i++)
	{
		printf("enter the arr[%d] value: ",i);
		scanf("%d",&arr[i]);
	}
	if(n >= 2) 
	{
      	for(int i=0;i<n;i++)
		{
           if(arr[i] > large) 
			{
                second_large = large;
                large = arr[i];
            }
            else if(arr[i]>second_large && arr[i] != large)
			{
                second_large = arr[i];
            } 
        }

        if(second_large != INT_MIN) {
            printf("The second largest elemet in array is %d", second_large);
        }
        else
		{
            printf("The second largest does not exist\n");
        }
    } 
    else
    {
        printf("The array size should be >2\n");
    }
    return 0;
}
