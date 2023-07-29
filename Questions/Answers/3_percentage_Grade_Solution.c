		
   /* Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
	Percentage >= 90% : Grade A
	Percentage >= 80% : Grade B
	Percentage >= 70% : Grade C
	Percentage >= 60% : Grade D
	Percentage >= 40% : Grade E
	Percentage <  40% : Grade F   */
	
#include<stdio.h>
int main()
{
	int phy,che,bio,math,comp,per;
	printf("Enter Physics marks :");
	scanf("%d",&phy);
	printf("Enter Chemistry marks :");
	scanf("%d",&che);
	printf("Enter Biology marks :");
	scanf("%d",&bio);
	printf("Enter Mathematics marks :");
	scanf("%d",&math);
	printf("Enter Computer marks :");
	scanf("%d",&comp);
	per=(phy+che+bio+math+comp)/5;
	printf("Percentage of five Subjects is %d\n",per);
	if(per>=90)
	{
		printf("Student got \'A\' Grade");
	}
	else if(per>=80)
	{
		printf("Student got \'B\' Grade");
	}
	else if(per>=70)
	{
		printf("Student got \'C\' Grade");
	}
	else if(per>=60)
	{
		printf("Student got \'D\' Grade");
	}
	else if(per>=40)
	{
		printf("Student got \'E\' Grade");
	}
	else 
	{
		printf("Student had \'Failed\' in exam");
	}
	return 0;	
}

