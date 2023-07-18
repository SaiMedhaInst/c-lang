## Break , Continue & Nested Loops

### Break.
- Break is a statement used to terminate the loop before it completes all iterations.
- The `break` statement can also be used to jump out of a **loop**.
- When ever break is encountered in a loop , control of the execution will terminate the loop and come out the loop body will follow next statements.
- Break is very useful to save the execution time/iterations, mainly used in complex problems.
```c
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}
```

### Continue
- The `continue` statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
- In simple terms, skip the current iteration and continue with next iterations.
```c
for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}
```

```c
while(true)
{
    if (someone_has_won() || someone_wants_to_quit() == TRUE)
    {break;}
    take_turn(player1);
    if (someone_has_won() || someone_wants_to_quit() == TRUE)
    {break;}
    take_turn(player2);
}
```


**Note**
-  When `break` is executed loop will be executed partially.
- When `continue` is executed loop will be executed all it's iteration till last.


## Nested Loops
- Nested Loop is defined as 	`A Loop inside another Loop` for performing nested operations/accessing nested data. We can define any number of loops inside another loop
- Nested Data like matrix, array with 2D , 3D , multi dimensions.

**for every ITERATION of outer-loop, inner loop has to complete all it's ITERATIONS.**

![nested-loops-dia1](https://i.imgur.com/YCPMgXo.png)

### Nested for Loop
```c
for ( initialization; condition; increment ) {

   for ( initialization; condition; increment ) {
      
      // statements of innner loop
   }
   // statements of outer loop
}
```

**Example**
```c
int arr[2][3][2]
	= { { { 0, 6 }, { 1, 7 }, { 2, 8 } },
		{ { 3, 9 }, { 4, 10 }, { 5, 11 } } };

// Printing values of 3-D array
for (int i = 0; i < 2; ++i) {
	for (int j = 0; j < 3; ++j) {
		for (int k = 0; k < 2; ++k) {
			printf("Element at arr[%i][%i][%i] = %d\n",
				   i, j, k, arr[i][j][k]);
		}
	}
}
```

**bubble-sort**
```c
int main() {
  int nums[] = {-2, 45, 0, 11, -9};
  
  int size = sizeof(nums)/sizeof(nums[0]);

  for (int i = 0; i < size - 1; ++i) {

    for (int j = 0; j < size - i - 1; ++j) {

      if (nums[j] > nums[j + 1]) {
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
}
```


### Nested for Loop

```c
while(condition) {

   while(condition) {
      
      // statement of inside loop
   }
   // statement of outer loop
}
```

**Example**
```
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
```

```c
int main()
{
    int n = 5;

    int i = 1;  
    while (i <= n) {
        printf("\n");
		
        int j = 1;
        while (j <= i) {
            printf("%d ", j);
            j = j + 1;
        }
        i = i + 1;
    }
    return 0;
}
```


### Nested do-while Loop

```c
do{
   do{
      
      // statement of inside loop
   }while(condition);

   // statement of outer loop
   
}while(condition);
```



## Exercise 

1. What's output for the following code snippet?
```c
    int i = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 3) {
                break;
            }
            printf("* ");
        }
        printf("\n");
    }
```


2.  Is this right way of writing syntax of break statement?
```c
for(int i=0;i<10000;i+=2){
    break;
    printf("hello from for loop...");
}
```

3. What's output for following code?
```c
int i;

for(i=0;i<100;i+=3){
    continue;
    printf("Hello SaiMedha...");
}

printf("value i = %d", i);
```

4. What's happens when break is triggered/encounter in inner loop, will it break both loops or only inner?

5. WAP to Print Prime number in a given range.

6.Write a program in C to display n terms of natural numbers and their sum.  

		Test Data : 7  
		Expected Output :  
		The first 7 natural number is :  
		1 2 3 4 5 6 7  
		The Sum of Natural Number upto 7 terms : 28

7. Write a program in C to display the multiplication table for a given integer.  


		Test Data :  
		Input the number (Table to be calculated) : 15  
		Expected Output :  
		15 X 1 = 15  
		...  
		...  
		15 X 10 = 150

8. Write a C program to calculate the factorial of a given number.  
	```
	Test Data :  
	Input the number : 5  
	Expected Output :  
	The Factorial of 5 is: 120
	```
9. Write a Program for Binary Search with minimal time complexity?
10. Write a program in C to check whether a number can be expressed as the sum of two prime.  
```
Test Data :  
Input a positive integer: 16  
Expected Output :  
16 = 3 + 13  
16 = 5 + 11 
```
