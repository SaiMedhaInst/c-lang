## Input and Output in C 

- C language has standard libraries that allow input and output in a program. The **stdio.h** or **standard input output library** in C that has methods for input and output.

### **scanf()**
- The scanf() method, in C, reads the value from the console as per the type specified.

**syntax**

**scanf(“%X”, &variableOfXType);** 
- where **%X** is the [format specifier in C](https://www.geeksforgeeks.org/format-specifiers-in-c/). 
- It is a way to tell the compiler what type of data is in a variable and **&** is the address operator in C, which tells the compiler to change the real value of this variable, stored at this address in the memory.

###  printf()

**syntax**

**printf(“%X”, variableOfXType);** where **%X** is the  format specifiers.


- **Integer**
```c
Input: scanf("%d", &intVariable);
Output: printf("%d", intVariable);
```

-   **Float:**

```c
Input: scanf("%f", &floatVariable);
Output: printf("%f", floatVariable);
```
- **Character:**

```c

Input: scanf("%c", &charVariable);
Output: printf("%c", charVariable);
```

# Character Input Output Operations
- To read a single character as input we use the `getchar()` function.
```c

#include <stdio.h>
int main(void)
{
  char ch;
  printf("Enter any character: ");
  ch = getchar();
  printf("Entered character: %c\n", ch);
  return 0;
}
```

- To output a single character we use the `putchar()` function.
```c
#include <stdio.h>
int main(void)
{
  char ch;
  printf("Enter any character: ");
  ch = getchar();
  printf("Entered character: ");
  putchar(ch);
  return 0;
}
```


## Exercise 
1. Write A Code To read a single character as input we use the `getchar()` function, and print it's ASCII value.
2.  What is **ctype.h** header file and it's methods?
3.  Write a Code to read  
	num1  of int type
	num2 of float
	num3 of double 
	Perform Addition , Subtraction , Multiplication , Division.
4. What's Output for following Code Snippet?
```c
int main()
{
	int a=1,b=2,c=3;
	printf("%d  %d  %d");
	return 0;
}
```

5. What's Output for following Code Snippet?

```c
int main()
{
int  result  =  printf("SaiMedha");
printf("%d\n" , result);
printf("%d\n", printf("includehelp"));
}
```
