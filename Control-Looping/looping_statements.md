## Looping statements

- Loops can execute a block of code as long as a specified condition is reached.
- Loops are handy because they save time, reduce errors, and they make code more readable.
- Loops are used to repeat a block of code.
	ex: many programs or websites that produce extremely complex output (such as a message board) are really only executing a single task many times.


**Scenario**
> When we want to perform a certain set of tasks repeatedly like printing "Hello World" for 100,000 times,  how we can accomplish this task?


- There are two ways we can
	- native approach 
		- We can either write `printf("Hello World\n");` statement for 100,000 times.
	- smart approach 
		- we can take help of  loop which will execute the `printf("Hello World\n");` code 100,000 times for us in few lines.
------------------------------------------------------------------------------------------------------------------------------------





- In C Lang we have following types of loops,
	- for loop
	- while loop
	- do while loop

---------------------------------------------------------------------------------------------------------------------------------
### For Loop
- When you know exactly how many times you want to loop through a block of code, use the `for` loop instead of a `while` loop:

```c
for( variable initialization; condition; variable update ) {`
	//Code to execute every-time when the condition is true
}
```

![for-loop](https://i.imgur.com/mAjQ41n.png)

**Examples**

```c
for(int i =1; i<=100000;i++){
	printf("Hello World !");
}
```
```c
int i;  

for (i = 0; i < 5; i++) {  
printf("%d\n", i);  
}
```

```c
for (i = 0; i <= 10; i = i + 2) {  
printf("%d\n", i);  
}
```
--------------------------------------------------------------------------------------------------------------------------------

### While Loop
- The `while` loop loops through a block of code as long as a specified condition is `true`:
- We prefer while loop, when we don't know no. of iterations in advance.

syntax:
```c
while  (condition) {  
// code block to be executed_  
}
```

![while-loop](https://i.imgur.com/hPhJF5X.png)

**Example**
```c
	int i = 0;  
	  
	while (i < 5) {  
	printf("%d\n", i);  
	i++;  
	}
```

**Note:** Do not forget to increase/increment the variable used in the condition (`i++`), otherwise the loop will never end! (infinite loop)
- infinite loops are bad practice for software development because it will consume lot of cpu and memory resources.
- Always keep a check on infinite loops in your code.


```c
  int product, count = 1;
  
  while (count <= 10) {
    product = 2 * count;
    printf("2 x %d = %d\n", count, product);

    count++;
  }
  
  printf("End of code\n");
```

-----------------------------------------------------------------------------------------------------------------------------------

### Do-while Loop

- The do-while is also known as an exit loop because in the do-while loop, the statements will be executed first and then the condition is checked.
- The `do/while` loop is a variant of the `while` loop. 
- This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

syntax:
```c
do {  
// code block to be executed  
}  
while (condition);
```

![while-loop](https://i.imgur.com/PwRug4n.png)

- The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:


```c
	int i = 0;  
	  
	do {  
	printf("%d\n", i);  
	i++;  
	}  
	while (i < 5);
```







## Exercises

1. Fill the following empty blanks?

![question-1](https://i.imgur.com/YPjxEyn.png)


2. What is the final value of x when the code int x; for(x=0; x<10; x++) {} is run?  
		A. 10  
		B. 9  
		C. 0  
		D. 1

3. In the while statement, while(x<100)..., when does the statement controlled by the condition execute?  
	A. When x is less than one hundred  
	B. When x is greater than one hundred  
	C. When x is equal to one hundred  
	D. While it wishes

4. How many times is a do while loop guaranteed to loop?  
	A. 0  
	B. Infinitely  
	C. 1  
	D. Variable

5.  What's output of following code snippet?
```c
# include<stdio.h>

int main(){
    for ( ; ; ) {
        printf( "Sai Medha ECET");
    }

    return 0;
}
```


6. how may times below code snippet will be executed?
```c
   int i;
    printf("%d\n", i);
    for ( ; i>0;i--) {
        printf( "Sai Medha ECET\n");
    }
```
