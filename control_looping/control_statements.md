## Types of Statements 
------------------------------------------------------------------------------------------------------
1. Sequential statements : flow of execution is line by line
2. Control statements: flow of execution depends on control expression.
3. Looping Statements: flow of execution depends on iterations/cycles.
4. Functional Statements: flow of execution rely on function calls.


### Sequential statements
```c
# include<stdio.h>
int main(int argc, char const *argv[])
{
    float monthSalary;
    printf("enter monthly salary = ");
    scanf("%f",&monthSalary);
    
    double annualPackage = monthSalary * 12;
    printf("annual package = %lf", annualPackage);
    return 0;
}
```

### Control statements
--------------------------------------------------------------------------------------------------------------------------------------
In simple words, Control statements in [C] help the computer execute a certain logical statement and decide whether to enable the control of the flow through a certain set of statements or not.
 Also, it is used to direct the execution of statements under certain conditions.

C has the following conditional statements:

-   Use  `if`  to specify a block of code to be executed, if a specified condition is  `true`
-   Use  `else`  to specify a block of code to be executed, if the same condition is  `false`
-   Use  `else if`  to specify a new condition to test, if the first condition is  `false`
-   Use  `switch`  to specify many alternative blocks of code to be executed

#### if statement

```c
if  (_condition_) {  
// block of code to be executed if the condition is true_  
}
```

![flowchart-if-statement](https://i.imgur.com/NR2ht52.png)

**Example**
```c
# include<stdio.h>

void main(){
    int a, b;
    printf("enter values for a & b : ");
    scanf("%d %d",&a, &b);

    if(a>b) {
        printf("%d greater than %d\n",a,b);
    }
}

```

**Note that `if` is in lowercase letters. Uppercase letters (If or IF) will generate an error.**

#### The else Statement
-------------------------------------------------------------------------------------------------------------------------------
Use the `else` statement to specify a block of code to be executed if the condition is `false`.

```c
if  (_condition_) {  
// block of code to be executed if the condition is true_  
} else {  
// block of code to be executed if the condition is false_  
}
```
![else-if-flowchart](https://i.imgur.com/fpDkyl8.png)
**Example**
```c
	int time = 20;
	if (time < 18) {
	  printf("Good day.");
	} else {
	  printf("Good evening.");
	}
```
```c
    int age;
    printf("Please enter age to check vote eligibility ? ");
    scanf("%d", &age);

    if(age>=18){
        printf("Yayy !! you can caste the vote...\n");
    } else {
        printf("Sorry :(, you are not eligible to caste the vote..\n");
    }
```

#### else if Statement
--------------------------------------------------------------------------------------------------------------------------------
```c
if  (condition1) {  
// block of code to be executed if condition1 is true_  
} else  if (condition2) {  
// block of code to be executed if the condition1 is false and condition2 is true_  
} else  if (condition3) {  
// block of code to be executed if the condition2 is false and condition3 is true_  
} else {  
// block of code to be executed if the condition3 is false 
}
```

![else-if-statement](https://i.imgur.com/OJGIIyb.png)

**Example**
```c
		int myNum ;
		scanf("%d", &myNum);

		if (myNum > 0) {
		  printf("The value is a positive number.");
		} else if (myNum < 0) {
		  printf("The value is a negative number.");
		} else {
		  printf("The value is 0.");
		}
```


#### Nested If Else Statement
- When ever we want to do nested condition checking, we can use nested if else

```c
	if (condition 1) {
	    if (condition 2) {
	        do something
	    } else {
	        do something else
	    }   
	}
	else{
	    if (condition 3) {
	        do something
	    } else {
	        do something else
	    }  
	}
```

![nested-if-else-flowchart](https://i.imgur.com/YCUpTDl.png)

**Example**
```c
  int n;
  scanf("%d", &n);

  if (n % 2 == 0) {  //the number is even
    printf("Even ");

    if (n % 4 == 0) {   //nested if else condition to check if n is divisible by 4 or not
      printf("and divisible by 4");
    } else {
      printf("and not divisible by 4");
    }
  } else {
    printf("Odd ");
    
    if (n % 3 == 0) {     //nested if else condition to check if n is divisible by 3 or not
      printf("and divisible by 3");
    } else {
      printf("and not divisible by 3");
    }
  }
```



### Switch Statement

- Instead of writing **many** `if..else` statements, you can use the `switch` statement.
- The `switch` statement selects one of many code blocks to be executed:
- Depending on the expression, the control is transferred to that particular case label and executed the statements under it.
```c

	switch(expression_) {  
			case  x:  
			// code block_
			break;  
			case y:  
			// code block_  
			break;  
			default:  
			// code block_  
	}
```

-   The  `switch`  expression is evaluated once
-   The value of the expression is compared with the values of each  `case`
-   If there is a match, the associated block of code is executed
-   The  `break`  statement breaks out of the switch block and stops the execution
-   The  `default`  statement is optional, and specifies some code to run if there is no case match

**Note**: data type of switch expression and case label must be same 
> The switch statement can only evaluate the integer or character value. So the switch expression should return the values of type int or char only.


**example**

```c
	int day = 4;

	switch (day) {
	  case 1:
	    printf("Monday");
	    break;
	  case 2:
	    printf("Tuesday");
	    break;
	  case 3:
	    printf("Wednesday");
	    break;
	  case 4:
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
	}
```

**Note** : 
-  A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.
- The default keyword must be used as the last statement in the switch, and it does not need a break.





## Exercise
1. Output for the following code snippet?
```c
    if('a' < 'D'){
        printf("lesser..");
    } else {
        printf("greater..");
    }

	if(10.5) {
			printf(" if block condition true so am executed..");
		} 
	else {
			printf(" else block condition false so am executed..");
		}
	
```

2. Output for the following code snippet?
```c
    char ch = 'A';
    switch (ch) {
        case 67:
            printf("letter B\n");
            break;
        case 'A':
            printf("letter A\n");
        case 68:
            printf("letter D\n");
        default:
            break;
    }
```

3. WAP to find largest of three numbers by taking input from console?

4. Which of the following is true?  
			A. 1  
			B. 66  
			C. .1  
			D. -1  
			E. All of the above
5.  Evaluate !(1 && !(0 || 1)).  
		A. True  
		B. False  
		C. Unevaluatable

6.  Which of the following shows the correct syntax for an if statement?  
		A. if _expression_  
		B. if { _expression_  
		C. if ( _expression_ )  
		D. _expression_ if
