# Strings in c

- A String is a sequence of characters terminated with a null character ‘\0’. 
- The C String is stored as an array of characters. 
- The difference between a character array and a C string is the string is terminated with a unique character ‘\0’.

![enter image description here](https://i.imgur.com/QRaz8M3.png)

**syntax**
- Declaring a string in C is as simple as declaring a one-dimensional array.
```
char string_name[size];
```

**Ways to Initialize a String in C**

1. Assigning a string literal without size
- String literals can be assigned without size. 
- Here, the name of the string str acts as a pointer because it is an array.

```c
char str[] = "SaiMedha";
```

----------------------------------------

2.Assigning a string literal with a predefined size
- String literals can be assigned with a predefined size. But we should always account for one extra space which will be assigned to the null character.
- To store a string of size n then we should always declare a string with a size **equal to or greater than n+1.**

```c
char str[8] = "SaiMedha";
```
----------------------------------------------------------------------------
3. Assigning character by character with size
- We can also assign a string character by character. 
- But we should remember to set the end character as ‘\0’ which is a null character.

```c
char str[3] = {'H','i','\0'};
```
--------------------------------------------------------------------------
4. Assigning character by character without size.

- We can assign character by character without size with the NULL character at the end. 
- The size of the string is determined by the compiler automatically.
```c
char str[] = {'H','i','\0'};
```

-------------------------------------------------------------------------------

**Note**
 When a Sequence of characters enclosed in the double quotation marks, compiler will appended default a null character ‘\0’ at the end of the string.




**Examples**
```c
char  str1[5] =  "Hello";

for(int i =0; str1[i] != '\0'; i++) {
	printf("%c  \n",str1[i]);
}
```

```c
int main()
{
    char str[] = "SaiMedha";

    printf("%s\n", str);
 
    int length = 0;
    length = strlen(str);
    printf("Length of string str is %d", length);
    printf("character at index %d is %c", 2,str[2]);
 
    return 0;
}
```


**Note**
-  The C language does not provide an inbuilt data type for strings but it has an access specifier “**%s**” which can be used to print and read strings directly.


### Read a String Input From the User
-------------------------------------------------------------
- Using this approach the string is read-only till the whitespace is encountered
1. using scanf() and %s access specifier

```c
    char str[50];
	scanf("%s",str);
	printf("%s",str);
```
-------------------------
2. Read a String Separated by Whitespaces
	- We can use the [fgets()](https://www.geeksforgeeks.org/fgets-gets-c-language/) function to read a line of string 
	- [gets()](https://www.geeksforgeeks.org/fgets-gets-c-language/) to read characters from the standard input (stdin) and store them as a C string until a newline character or the [End-of-file (EOF)](https://www.geeksforgeeks.org/eof-and-feof-in-c/) is reached.

```c
#include <stdio.h>
#define MAX 50
int main()
{
    char str[MAX];
    fgets(str, MAX, stdin);
 
    printf("String is: \n");

    puts(str);
    return 0;
}
```
---------------------------------
- We can also **scanset characters** inside the scanf() function
```c
#include <stdio.h>
int main()
{
    char str[20];
    scanf("%[^\n]s", str);

    printf("%s", str);
    return 0;
}
```
-------------------------------------	
### Standard C Library – String.h Functions
- [strlen(string_name)](https://www.geeksforgeeks.org/strlen-function-in-c/) Returns the length of string name.
- [strcpy(s2, s1)](https://www.geeksforgeeks.org/strcpy-in-c-cpp/)Copies the contents of string s1 to string s2.
- [strcmp(str1, str2)](https://www.geeksforgeeks.org/strcmp-in-c-cpp/) Compares the first string with the second string. If strings are the same it returns 0.
- [strcat(s1, s2)](https://www.geeksforgeeks.org/strcat-vs-strncat-c/)Concat s1 string with s2 string and the result is stored in the first string.
- [strlwr()](https://www.geeksforgeeks.org/strlwr-function-in-c/)Converts string to lowercase.
- [strupr()](https://www.geeksforgeeks.org/strupr-function-in-c/) Converts string to uppercase.
- [strstr(s1, s2)](https://www.geeksforgeeks.org/strstr-in-ccpp/) Find the first occurrence of s2 in s1.

```c
#include<stdio.h>
#include<string.h>

void main() {

    char s1[] = "Hello";
    char s2[10];
    
    strcpy(s2,s1); //(destination,source)
    printf("%c %c\n", s1[0],s2[0]);
    printf("%d\n",s1 == s2);
    printf("%d\n",s1[0] == s2[0]);
}
```
