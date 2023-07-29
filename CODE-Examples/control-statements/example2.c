#include<stdio.h>

void main() {

    int day;
    printf("enter day number: ");
    scanf("%d", &day);
    
	switch (day) {
	  case 1:
	    printf("Monday");
	    break;
	  case 2.0:
	    printf("Tuesday");
	    break;
	  case 3.0:
	    printf("Wednesday");
	    break;
	  case 4.0:
	    printf("Thursday");
		break;
	  case 5:
	    printf("Friday");
		break;
	  case 6:
	    printf("Saturday");
		break;
	  case 7:
	    printf("Sunday");
		break;
	  default:
	  	printf("invalid day number...");
	}

}