
## Data Types, Variables, and Constants , Comments

### Comments in C
- Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code.
- Comments are non executable lines and ignored by compiler.
- Comments can be  **singled-lined**  or  **multi-lined**.

**Single-line Comments**
- Single-line comments start with two forward slashes (`//`).
- Any text between  `//`  and the end of the line is ignored by the compiler (will not be executed).
```c
// This is a comment  
printf("Hello World!");
```
**Multi-line Comments**
- Multi-line comments start with  `/*`  and ends with  `*/`.
- Any text between  `/*`  and  `*/`  will be ignored by the compiler:
```c
/* 
The code below will print the words 
Hello World!  to the screen, and it is amazing 
*/  
printf("Hello World!");
```

### Variables
-  Variables are containers for storing data values, like numbers and characters.
- Variable is name to the memory location in which value is stored.
- Variable possess variability property which means, its value can be changed during execution.

![variables](https://i.imgur.com/FoYtkmR.png)


In C, there are different  **types**  of variables (defined with different keywords), for example:

-   `int`  - stores integers (whole numbers), without decimals, such as  `123`  or  `-123`
-   `float`  - stores floating point numbers, with decimals, such as  `19.99`  or  `-19.99`
-   `char`  - stores single characters, such as  `'a'`  or  `'B'`. Char values are surrounded by  **single quotes**

```c
data_type  var_name; // variable declaration
data_type  var_name  =  <value>; // assigning values to variable
```
- Where data_type  is one of C types (such as `int`), and var_name  is the name of the variable (such as **x** or **myName**). The **equal sign** is used to assign a value to the variable.

#### Rules
- All C  **variables**  must be  **identified**  with  **unique names**.

- These unique names are called  **identifiers**.
- Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

**Note:**  It is recommended to use descriptive names in order to create understandable and maintainable code:
```c
// Good  
int minutesPerHour = 60;  
  
// OK, but not so easy to understand what  **m**  actually is  
int  m = 60;
```
The **general rules** for naming variables are:

-   Names can contain letters, digits and underscores
-   Names must begin with a letter or an underscore (_)
-   Names are case sensitive (`myVar`  and  `myvar`  are different variables)
-   Names cannot contain whitespaces or special characters like !, #, %, etc.
-   Reserved words (such as  `int`) cannot be used as names

## Try it 
---------------------------------------------------------------------------------------------------------   Create a variable called **myNum** of type `int` and assign the value **15** to it:
```c
int myNum = 15;

or


int myNum;  // Declare a variable  

myNum = 15; // Assign a value to the variable  
```

### Output Variables
- To output variables in C, you must get familiar with something called "format specifiers".

- Format specifiers are used together with the  `printf()`  function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

- A format specifier starts with a percentage sign  `%`, followed by a character.

For example, to output the value of an  `int`  variable, we must use the format specifier  `%d`  or  `%i`  surrounded by double quotes, inside the  `printf()`  function.

```c
int myNum = 15;  
printf(myNum) // Error

printf("%d", myNum); // Outputs 15
```

To print other types, use `%c` for `char` and `%f` for `float`:

```c

int myNum = 15; // Integer (whole number)  
float  myFloatNum = 5.99; // Floating point number  
char myLetter = 'D'; // Character  
  
// Print variables  
printf("%d\n", myNum);  
printf("%f\n", myFloatNum);  
printf("%c\n", myLetter);
```

To combine both text and a variable, separate them with a comma inside the `printf()` function:

```c
int myNum = 15;  
printf("My favorite number is: %d", myNum);
```
To print different types in a single `printf()` function



```c
int myNum = 15;  
char myLetter = 'D';  
printf("My number is %d and my letter is %c", myNum, myLetter);
```

## Try it 
- Declare a variable score of int and assign a value 75, in next line re-assign or update to 94
- How to declared more than one variable in a single line?



### Data Types
- The data type specifies the size and type of information the variable will store.

![datatypes](https://i.imgur.com/qZ5M35F.png)
![all-datatypes](https://miro.medium.com/v2/resize:fit:828/format:webp/1*cemNFCrMA3MK27nCuUuG_Q.png)
**Example-1**

```c
float myFloatNum = 3.5;  
double myDoubleNum = 19.99;  
  
printf("%f\n", myFloatNum); // Outputs 3.500000  
printf("%lf", myDoubleNum); // Outputs 19.990000
```

**Example-2**

- To remove the extra zeros (set decimal precision), use a dot (`.`) followed by a number that specifies how many digits that should be shown after the decimal point
```c
float  myFloatNum =  3.5;  
  
printf("%f\n", myFloatNum);  // Default will show 6 digits after the decimal point  
printf("%.1f\n",  myFloatNum);  // Only show 1 digit  
printf("%.2f\n", myFloatNum);  // Only show 2 digits  
printf("%.4f", myFloatNum); // Only show 4 digits

```

**Real-Life Example**
```c
// Student data  
int studentID = 15;  
int studentAge = 23;  
float  studentFee = 75.25;  
char studentGrade = 'B';  
  
// Print variables  
printf("Student id: %d\n", studentID);  
printf("Student age: %d\n", studentAge);  
printf("Student fee: %f\n", studentFee);  
printf("Student grade: %c", studentGrade);
```


### Constants

When you don't want a variable to be modified during the course of the program, you should declare it as a constant

- Using `#define`

```c

#define  ID  204

  

#define  ID  207 //this compiles without errors :/

```

- Although you'd like `ID` to be a constant, it's in some sense not *completely constant* as you can redefine its value

  

- Using `const` keyword

```c

const  int id =  204; //cannot re-define elsewhere

```

- Using the `const` keyword renders `id` as a read-only variable, so you cannot modify it elsewhere in the program

- And trying to do so will raise errors

### Naming conventions

- Names of constants are usually in upper case

```c

#define  PI  3.14159

```

- Variable and function names should be descriptive

```c
float  calc_total(float  bill_amt,  float  tip_perc)
{

float total;

total =  bill_amt( 1  + tip_perc *  0.01);

return total;
}

```


##  Exercise
1. Choose the correct datatype for the following 
```c
 __ myNum = 5;
 __ myFloatNum = 5.99;
 __ myLetter = 'D';
``` 

2. Create a variable named `myNum` and assign the value `50` to it.	
__ __ = _

3. Write a program in C to print "I'm learning C" , and greet with your name.
	ex: Hello Everyone am Ram, Learning C 

4.  Write a program in C to add 10 and 20 and print the result.
5.  What's Output of the Below Code Snippet?

![code-example1](https://i.imgur.com/nkydWv8.png)


