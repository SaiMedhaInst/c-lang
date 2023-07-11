
## What Is C?

--------------------------------------------------------------------------

- C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.

  

- It is a very popular & fast language, despite being old.

  

- It was mainly developed as a system programming language to write the UNIX operating system.

- C is strongly associated with UNIX.

  

**The main features of the C language include:**

  

General Purpose and Portable

Low-level Memory Access

Fast Speed

Clean Syntax

**Application of C **

- Operating systems

- Embedded systems

- System software

- Networking , DataBase.

  

## Why Learn C?

--------------------------------------------------------------------------

  

- It is one of the most popular programming language in the world

- If we know C, we will have no problem learning other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar

- C is very fast, compared to other programming languages, like Java and Python

- C is very versatile; it can be used in both applications and technologies

  

## Histroy

--------------------------------------------------------------------------

![histroy](https://i.imgur.com/0PZfHLz.png  "histroy")

  
  
  

## Installation

------------------------------------------------------------------------------------------------

1. Download the open-source MinGW from internet and run the installer file

link: https://sourceforge.net/projects/mingw/

2. Installation-Path: C:\MinGW

3. In the installation wizard select only gcc & g++ compiler

4. Once installation is completed , add the PATH = **C:\MinGW\bin** to Environmental Variables.

5. Then Verify in command prompt

```unix

gcc --version

g++ version

```

  
  

## Structure of C Program.

------------------------------------------------------------------------------------------------

![structureofc](https://i.imgur.com/Bnb5AiX.png  "structureofc")

  

#### Documentation Section.

Documentation section consists of a set of comment lines giving the name of the program, the author, and other details.

  

#### Link Section.

- In Link Section we include/link header files required for program

- A header file is a file with **extension .h** which contains C function declarations and macro definitions to be shared between several source files.

- All lines that start with # are processed by a preprocessor which is a program invoked by the compiler.

- stddef.h – Defines several useful types and macros.

- stdint.h – Defines exact width integer types.

- stdio.h – Defines core input and output functions

- stdlib.h – Defines numeric conversion functions, pseudo-random network generator, and memory allocation

- string.h – Defines string handling functions

- math.h – Defines common mathematical functions

  
  

#### Global Declaration Section.

- We declared definitions for global functions.

  

#### Main Function Section.

- We declare the main() function

- It is the entry point of a C program and the execution typically begins with the first line of the main()

- The value returned by the main indicates the status of program termination.

  

#### Sub-Program Section.

- We declare body/implementation for user defined functions.

  

## First C Program.

----------------------------------------------------------------------------------------------------

  

```c

#include  <stdio.h>

  

int  main()

{

printf("C is cool!\n");

return  0;

}

  

```

### Making sense of the construct

  

-  **#include**: preprocessor directive that causes the contents of stdio.h to be included.

-  `< >` around stdio.h: look for this file in the *system* directory

-  **int**: return type of the function

- When you know that a function returns a value, the *type* of the value that it's expected to return precedes the function name.

-  **main**: program execution starts from the main function

-  `()`: the main function here doesn't consume any arguments

-  `{}`: delimiters for a block of code

-  **printf**: prints out the string of characters passed in as the argument

-  `;`: all C statements terminate in a semicolon

-  `return 0;`: the code returns `0` when execution is successful

  

### Command-line arguments in C

  

```c

int  main(int  argc,  char  **argv)

```

- Run program from the command prompt: `ProgramName arg1 arg2 arg3 //args separated by space`

-  `argc`: number of command-line arguments

-  `argv`: list of command-line args; more of an argument vector, or a pointer to an array of character-string arguments

  

### Introducing `printf()`

```c

puts("Print a simple string");

printf("Print a formatted string");

```

- Inside the `printf()` function, format specifiers (%d, %s etc.) can be replaced with the corresponding values.

- These values are specified as a comma-delimited list of values in the `printf()` function.

  

```c

printf("I have been coding in %s for %d years now\n",  "C",  2);

```

**Note**:

> Ensure that the *number* and *type of values* in the comma-delimited list match the corresponding format specifiers inside the string.

### Comments

- Comment your code for better readability

```c

// This is a single-line comment

  

/* This is a multi-line

comment that spans

multiple lines */

```

  
  

## Execution Process of a C Program?

-----------------------------------------------------------------------------------------------

![execution-process](https://i.imgur.com/irsgZhV.png  "execution-process")

  
  

![execution-phases](https://media.geeksforgeeks.org/wp-content/uploads/20230404112946/Compilation-Process-in-C.png  "execution-phases")

  
  
  

### Compilation.

**

gcc file-name.c

**

  

### Running.

**

./a.exe

or

./filename.exe

**

  
  
  
  
  

## Exercise

--------------------------------------------------------------------------------------------------

1. Can return type of main() functions be void , float?

2. C is compiled language or interpreted languages?

3. What's major difference between compiler vs interpreter?

4. What does a header file (.h) actually contains?

5. C follows ASCII or UNICODE?
