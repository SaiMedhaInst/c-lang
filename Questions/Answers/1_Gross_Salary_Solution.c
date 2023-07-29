/*  Write a C program to input basic salary of an employee and calculate its Gross salary according to following:

        Basic Salary <= 10000 : HRA = 20%, DA = 80%
        Basic Salary <= 20000 : HRA = 25%, DA = 90%
        Basic Salary > 20000 : HRA = 30%, DA = 95%
        
    GROSS SALARY = BASIC + HRA + DA*/
#include<stdio.h>
int main()
{
	float Basic_sal,HRA,DA,gross_sal;
	printf("Enter the Basic_sal: ");
	scanf("%f",&Basic_sal);
	if(Basic_sal <= 10000)
	{
		HRA = Basic_sal*0.2;
		DA = Basic_sal*0.8;
	}
	else if(Basic_sal<=20000)
	{
		HRA = Basic_sal*0.25;
		DA = Basic_sal*0.9;
	}
	else if(Basic_sal>20000)
	{
		HRA = Basic_sal*0.3;
		DA = Basic_sal*0.95;
	}
	gross_sal = Basic_sal+HRA+DA;
	printf("Gross salary of the employee is %f",gross_sal);
	return 0;
}
