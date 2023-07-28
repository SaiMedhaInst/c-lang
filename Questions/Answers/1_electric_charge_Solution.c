/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
		For first 50 units Rs. 0.50/unit
        For next 100 units Rs. 0.75/unit
        For next 100 units Rs. 1.20/unit
        For unit above 250 Rs. 1.50/unit
        An additional surcharge of 20% is added to the bill   */
#include<stdio.h>
int main()
{
	int units;
	float units_charge,total_bill;
	printf("Enter the units: ");
	scanf("%d",&units);
	if(units<=50)
	{
		units_charge =units*0.50;
	}
	else if(units<=150)
	{
		units_charge = ((50*0.50)+((units-50)*0.75));
	}
	else if(units<=250)
	{
		units_charge = ((50*0.50)+(100*0.75)+((units-150)*1.2));
	}
	else if(units>250)
	{
		units_charge = ((50*0.50)+(100*0.75)+(100*1.2)+((units-250)*1.5));
	}
	total_bill= units_charge+units_charge*0.2;
	printf("the total electricity bill is %f",total_bill);
	return 0;
}
