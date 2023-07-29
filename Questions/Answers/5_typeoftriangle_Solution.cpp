	//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle..
		
#include<stdio.h>
int main()
{
	int a,b,c;
 	printf("Enter the a,b,c values: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c)
	{
		printf("It is a equatrial triangle");
	}
	else if(a==b!=c || b==c!=a || c==a!=b)
	{
		printf("It is a isosceles triangle");
	}
	else
	{
		printf("It is a scalenes triangle");
	}
	return 0;
}
