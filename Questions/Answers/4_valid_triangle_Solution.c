	//Write a C program to input all sides of a triangle and check whether triangle is valid or not..
		
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the a,b,c values: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b)
	{
		printf("The using %d,%d,%d sides,it can form a triangle..",a,b,c);
	}
	else
	{
		printf("The using %d,%d,%d sides,it cannot form a triangle..",a,b,c);
	}
	return 0;
}
